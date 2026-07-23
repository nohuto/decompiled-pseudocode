/*
 * XREFs of _TppWorkpExecuteCallback@8 @ 0x4B2B6B30
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 * Callees:
 *     _TppWorkCallbackPrologRelease@12 @ 0x4B2B7032 (_TppWorkCallbackPrologRelease@12.c)
 *     _LdrpWorkCallback@12 @ 0x4B2B71B0 (_LdrpWorkCallback@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _TppETWCallbackDequeue@20 @ 0x4B3849B7 (_TppETWCallbackDequeue@20.c)
 *     _TppETWCallbackStart@20 @ 0x4B384AA9 (_TppETWCallbackStart@20.c)
 *     _TppETWCallbackStop@20 @ 0x4B384B22 (_TppETWCallbackStop@20.c)
 */

unsigned int __stdcall TppWorkpExecuteCallback(PTP_CALLBACK_INSTANCE a1, int a2)
{
  _DWORD *SharedData; // eax
  _TP_WORK *v3; // esi
  int v4; // eax
  unsigned int result; // eax
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // ebx
  int v10; // edx
  _DWORD *ThreadPoolData; // ecx
  int v12; // eax
  int v13; // eax
  char *v14; // ecx
  char *v15; // ebx
  void (__cdecl *v16)(PTP_CALLBACK_INSTANCE, PVOID, PTP_WORK); // edi
  _DWORD *v17; // eax
  int v18; // edx
  unsigned int v19; // esi
  unsigned int v20; // ecx
  void *v21; // [esp-8h] [ebp-28h]
  char *v22; // [esp+Ch] [ebp-14h]

  SharedData = NtCurrentPeb()->SharedData;
  v3 = (_TP_WORK *)(a2 - 120);
  if ( SharedData && *SharedData )
    v4 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v4 = 2147353478;
  if ( *(_BYTE *)v4 )
    TppETWCallbackDequeue(*((_DWORD *)v3 + 12), *((_DWORD *)v3 + 13), *((_DWORD *)v3 + 15));
  result = TppWorkCallbackPrologRelease(0);
  if ( result )
  {
    v6 = NtCurrentPeb()->SharedData;
    if ( v6 && *v6 )
      v7 = (int)NtCurrentPeb()->SharedData + 556;
    else
      v7 = 2147353478;
    if ( *(_BYTE *)v7 )
      TppETWCallbackStart(*((_DWORD *)v3 + 12), *((_DWORD *)v3 + 13), *((_DWORD *)v3 + 15));
    v8 = *((_DWORD *)v3 + 15);
    v9 = *((_DWORD *)v3 + 13);
    v10 = *((_DWORD *)v3 + 12);
    ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
    if ( ThreadPoolData )
    {
      v12 = ThreadPoolData[2];
      ++ThreadPoolData[3];
      v13 = ((_BYTE)v12 - 1) & 1;
      ThreadPoolData[2] = v13;
      v14 = (char *)&ThreadPoolData[6 * v13];
      *((_DWORD *)v14 + 7) = v9;
      v22 = v14 + 24;
      *((_DWORD *)v14 + 6) = v10;
      *((_DWORD *)v14 + 8) = v8;
      while ( MEMORY[0x7FFE000C] != MEMORY[0x7FFE0010] )
        _mm_pause();
      v3 = (_TP_WORK *)(a2 - 120);
      v15 = v14 + 24;
      *((_QWORD *)v14 + 5) = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
      v10 = *(_DWORD *)(a2 - 120 + 48);
    }
    else
    {
      v15 = 0;
      v22 = 0;
    }
    *((_DWORD *)a1 + 12) = v10;
    *((_DWORD *)a1 + 13) = *((_DWORD *)v3 + 13);
    v16 = (void (__cdecl *)(PTP_CALLBACK_INSTANCE, PVOID, PTP_WORK))*((_DWORD *)v3 + 12);
    v21 = (void *)*((_DWORD *)v3 + 13);
    if ( v16 == LdrpWorkCallback )
      LdrpWorkCallback(a1, v21, v3);
    else
      ((void (__thiscall *)(void (__cdecl *)(PTP_CALLBACK_INSTANCE, PVOID, PTP_WORK), PTP_CALLBACK_INSTANCE, void *, _TP_WORK *))v16)(
        v16,
        a1,
        v21,
        v3);
    v17 = NtCurrentPeb()->SharedData;
    if ( v17 && *v17 )
      result = (unsigned int)NtCurrentPeb()->SharedData + 556;
    else
      result = 2147353478;
    if ( *(_BYTE *)result )
      result = TppETWCallbackStop(*((_DWORD *)v3 + 12), *((_DWORD *)v3 + 13), *((_DWORD *)v3 + 15));
    if ( v15 )
    {
      while ( MEMORY[0x7FFE000C] != MEMORY[0x7FFE0010] )
        _mm_pause();
      result = (MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]) >> 32;
      v18 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
      v19 = *((_DWORD *)v22 + 5);
      v20 = *((_DWORD *)v22 + 4);
      if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= __SPAIR64__(v19, v20) )
      {
        *((_DWORD *)v22 + 4) = v18 - v20;
        result = (__PAIR64__(result, v18) - __PAIR64__(v19, v20)) >> 32;
        *((_DWORD *)v22 + 5) = result;
      }
    }
  }
  return result;
}
