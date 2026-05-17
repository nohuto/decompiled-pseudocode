/*
 * XREFs of _PsspCaptureThreadInformation@16 @ 0x4B388568
 * Callers:
 *     _PssNtCaptureSnapshot@16 @ 0x4B386310 (_PssNtCaptureSnapshot@16.c)
 * Callees:
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 *     _ZwGetNextThread@24 @ 0x4B2F3900 (_ZwGetNextThread@24.c)
 *     _RtlGetExtendedContextLength@8 @ 0x4B35B830 (_RtlGetExtendedContextLength@8.c)
 *     PsspDumpThread @ 0x4B38883C (PsspDumpThread.c)
 *     PsspFreeLinkedHandleList @ 0x4B388A00 (PsspFreeLinkedHandleList.c)
 */

int __fastcall PsspCaptureThreadInformation(_DWORD *a1, int a2, unsigned int a3, int a4)
{
  int v4; // edi
  int v5; // ebx
  int NextThread; // eax
  HANDLE v7; // ecx
  unsigned __int16 v8; // dx
  int v9; // ecx
  int v10; // ebx
  int v11; // eax
  int v12; // edx
  bool v13; // sf
  int Section; // ebx
  int v16; // ecx
  int v17; // eax
  HANDLE *v18; // ecx
  int v19; // eax
  unsigned int v20; // eax
  _DWORD *v21; // edx
  HANDLE v22; // eax
  int v23; // ecx
  _DWORD *v24; // edx
  unsigned __int64 v25; // [esp-8h] [ebp-60h]
  _DWORD v26[2]; // [esp+20h] [ebp-38h] BYREF
  unsigned int v27; // [esp+28h] [ebp-30h] BYREF
  int VirtualMemory; // [esp+2Ch] [ebp-2Ch]
  unsigned int v29; // [esp+30h] [ebp-28h]
  int v30; // [esp+34h] [ebp-24h]
  _DWORD *v31; // [esp+38h] [ebp-20h]
  HANDLE Handle; // [esp+3Ch] [ebp-1Ch] BYREF
  int v33; // [esp+40h] [ebp-18h] BYREF
  int v34; // [esp+44h] [ebp-14h] BYREF
  int v35; // [esp+48h] [ebp-10h]
  HANDLE v36; // [esp+4Ch] [ebp-Ch] BYREF
  int v37; // [esp+50h] [ebp-8h] BYREF
  int v38; // [esp+54h] [ebp-4h] BYREF

  v31 = a1;
  v35 = a2;
  v27 = a3 & 0x100;
  v4 = 0;
  v5 = 0;
  v34 = 0;
  v29 = (a3 >> 7) & 8 | (8 * (v27 != 0) + 64);
  NextThread = ZwGetNextThread(a2, 0, v29, 0, 0, (int)&v36);
  VirtualMemory = NextThread;
  if ( NextThread != -2147483622 )
  {
    do
    {
      v7 = v36;
      v30 = (int)v36;
      if ( NextThread < 0 )
      {
LABEL_38:
        PsspFreeLinkedHandleList(v4);
        return VirtualMemory;
      }
      if ( !v5 || (v8 = *(_WORD *)(v5 + 6), v8 >= *(_WORD *)(v5 + 4)) )
      {
        v38 = 1;
        v37 = 0;
        VirtualMemory = NtAllocateVirtualMemory(-1, (int)&v37, 0, (int)&v38, 4096, 4);
        if ( VirtualMemory < 0 )
          goto LABEL_38;
        if ( v4 )
        {
          *(_DWORD *)v5 = v37;
          v5 = v37;
        }
        else
        {
          v5 = v37;
          v4 = v37;
        }
        v8 = 0;
        *(_WORD *)(v5 + 4) = (unsigned int)(v38 - 8) >> 2;
        *(_WORD *)(v5 + 6) = 0;
        v7 = v36;
      }
      *(_DWORD *)(v5 + 4 * v8 + 8) = v7;
      ++*(_WORD *)(v5 + 6);
      ++v34;
      NextThread = ZwGetNextThread(v35, v30, v29, 0, 0, (int)&v36);
      VirtualMemory = NextThread;
    }
    while ( NextThread != -2147483622 );
    v10 = v34;
    if ( !v34 )
      return 0;
    v11 = 0;
    v30 = 0;
    v12 = 0;
    v35 = 0;
    v34 = 0;
    if ( v27 )
    {
      if ( (a3 & 0x200) == 0 || (v13 = RtlGetExtendedContextLength(v9, 0, a4, &v34) < 0, v11 = v34, v13) )
        v11 = 716;
      v12 = 8;
      v35 = v11;
      v30 = 8;
    }
    v31[216] = v11;
    v25 = (unsigned int)v10 * (unsigned __int64)(v12 + 104 + ((v11 + 15) & 0xFFFFFFF0));
    Section = RtlULongLongToUInt((int *)&v27, v25, SHIDWORD(v25));
    if ( Section < 0 )
      goto LABEL_18;
    v26[0] = v27;
    v26[1] = 0;
    Section = NtCreateSection((int)&Handle, 983047, (int)dword_4B2A5984, (int)v26, 4, 0x8000000, 0);
    if ( Section < 0 )
      goto LABEL_18;
    v33 = 0;
    v38 = 0;
    Section = ZwMapViewOfSection((int)Handle, -1, (int)&v33, 0, 0, 0, (int)&v38, 1, 0, 4);
    if ( Section < 0 )
      goto LABEL_21;
    v16 = v33;
    v17 = v4;
    v34 = v4;
    if ( v4 )
    {
      while ( 1 )
      {
        v29 = 0;
        if ( *(_WORD *)(v17 + 6) )
          break;
LABEL_29:
        if ( Section >= 0 )
        {
          v17 = *(_DWORD *)v17;
          v34 = v17;
          if ( v17 )
            continue;
        }
        v16 = v33;
        goto LABEL_32;
      }
      v18 = (HANDLE *)(v17 + 8);
      VirtualMemory = v17 + 8;
      while ( 1 )
      {
        v36 = *v18;
        v19 = PsspDumpThread(a4, v35, v30, v36);
        Section = v19;
        if ( v19 == -1073741789 )
        {
LABEL_28:
          v17 = v34;
          goto LABEL_29;
        }
        if ( v19 < 0 )
          break;
        v18 = (HANDLE *)(VirtualMemory + 4);
        ++v29;
        v20 = *(unsigned __int16 *)(v34 + 6);
        VirtualMemory += 4;
        if ( v29 >= v20 )
          goto LABEL_28;
      }
      NtUnmapViewOfSection(-1, v33);
LABEL_21:
      NtClose(Handle);
LABEL_18:
      PsspFreeLinkedHandleList(v4);
      return Section;
    }
LABEL_32:
    NtUnmapViewOfSection(-1, v16);
    PsspFreeLinkedHandleList(v4);
    v21 = v31;
    v31[210] = 0;
    v22 = Handle;
    v21[211] = 0;
    v21[212] = v22;
    while ( 1 )
    {
      v23 = MEMORY[0x7FFE0018];
      if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
        break;
      _mm_pause();
    }
    v24 = v31;
    v31[214] = MEMORY[0x7FFE0014];
    v24[215] = v23;
  }
  return 0;
}
