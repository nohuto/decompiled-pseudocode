/*
 * XREFs of _PsspCaptureHandleInformation@12 @ 0x4B387CF4
 * Callers:
 *     _PssNtCaptureSnapshot@16 @ 0x4B386310 (_PssNtCaptureSnapshot@16.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 *     PsspWalkHandleTable @ 0x4B3882F7 (PsspWalkHandleTable.c)
 */

int __fastcall PsspCaptureHandleInformation(_DWORD *a1, int a2, int a3)
{
  int result; // eax
  int v6; // esi
  int Heap; // eax
  int v8; // ecx
  _DWORD *v9; // edi
  _DWORD v10[2]; // [esp+10h] [ebp-4Ch] BYREF
  int v11; // [esp+18h] [ebp-44h]
  int v12; // [esp+1Ch] [ebp-40h]
  int v13; // [esp+20h] [ebp-3Ch] BYREF
  _DWORD v14[3]; // [esp+28h] [ebp-34h] BYREF
  _DWORD *v15; // [esp+34h] [ebp-28h]
  unsigned int v16; // [esp+38h] [ebp-24h]
  unsigned int v17; // [esp+3Ch] [ebp-20h] BYREF
  int InformationProcess; // [esp+40h] [ebp-1Ch]
  HANDLE Handle; // [esp+44h] [ebp-18h] BYREF
  int v20; // [esp+48h] [ebp-14h] BYREF
  int v21; // [esp+4Ch] [ebp-10h] BYREF
  int v22; // [esp+50h] [ebp-Ch] BYREF
  int v23[2]; // [esp+54h] [ebp-8h] BYREF

  v15 = a1;
  result = ZwQueryInformationProcess(a2, 20, (int)&v13, 8, 0);
  if ( result >= 0 )
  {
    InformationProcess = 4 * v13;
    v6 = a3 & 0x20000000;
    if ( (a3 & 0x20000000) != 0 )
    {
      v23[0] = 0;
      v22 = 4 * v13;
      result = NtAllocateVirtualMemory(-1, (int)v23, 0, (int)&v22, 4096, 4);
      if ( result < 0 )
        return result;
      Heap = v23[0];
    }
    else
    {
      Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 4 * v13);
      v23[0] = Heap;
      if ( !Heap )
        return -1073741670;
    }
    InformationProcess = ZwQueryInformationProcess(a2, 58, Heap, InformationProcess, (int)&v17);
    if ( InformationProcess < 0
      || (v21 = 0,
          v16 = v17 >> 2,
          PsspWalkHandleTable(v17 >> 2, a3, PsspHandleStreamSizeCalculator, &v21),
          v14[1] = 0,
          v14[0] = v21,
          InformationProcess = NtCreateSection((int)&Handle, 983047, (int)dword_4B2A596C, (int)v14, 4, 0x8000000, 0),
          InformationProcess < 0) )
    {
      if ( !v6 )
      {
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v23[0]);
        return InformationProcess;
      }
      goto LABEL_11;
    }
    v20 = 0;
    v22 = 0;
    InformationProcess = ZwMapViewOfSection((int)Handle, -1, (int)&v20, 0, 0, 0, (int)&v22, 1, 0, 4);
    if ( InformationProcess < 0 )
    {
      NtClose(Handle);
      if ( !v6 )
      {
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v23[0]);
        return InformationProcess;
      }
LABEL_11:
      v22 = 0;
      NtFreeVirtualMemory(-1, (int)v23, (int)&v22, 0x8000);
      return InformationProcess;
    }
    v11 = 0;
    v12 = 0;
    v10[0] = v20;
    v21 = v22;
    v10[1] = v22;
    PsspWalkHandleTable(v16, a3, PsspHandleDumper, v10);
    NtUnmapViewOfSection(-1, v20);
    if ( v6 )
    {
      v22 = 0;
      NtFreeVirtualMemory(-1, (int)v23, (int)&v22, 0x8000);
    }
    else
    {
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v23[0]);
    }
    a1[204] = v12;
    a1[205] = v11;
    a1[206] = Handle;
    while ( 1 )
    {
      v8 = MEMORY[0x7FFE0018];
      if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
        break;
      _mm_pause();
    }
    v9 = v15;
    result = 0;
    v15[208] = MEMORY[0x7FFE0014];
    v9[209] = v8;
  }
  return result;
}
