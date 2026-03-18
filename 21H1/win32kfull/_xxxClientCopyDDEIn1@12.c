/*
 * XREFs of _xxxClientCopyDDEIn1@12 @ 0x193B53
 * Callers:
 *     ?xxxCopyDdeIn@@YGKPAXPAKPAPAXPAPAUtagINTDDEINFO@@@Z @ 0x17F478 (-xxxCopyDdeIn@@YGKPAXPAKPAPAXPAPAUtagINTDDEINFO@@@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?xxxClientCopyDDEIn2@@YGHPAUtagINTDDEINFO@@@Z @ 0x189584 (-xxxClientCopyDDEIn2@@YGHPAUtagINTDDEINFO@@@Z.c)
 *     _SIZETAdd@12 @ 0x192B76 (_SIZETAdd@12.c)
 */

int __fastcall xxxClientCopyDDEIn1(int a1, int a2, int *a3)
{
  int v3; // ebx
  int v4; // esi
  int *v5; // ecx
  int v6; // eax
  char *v7; // esi
  SIZE_T v8; // eax
  char *v9; // edi
  volatile void *v10; // esi
  int ThreadWin32Thread; // eax
  int result; // eax
  SIZE_T v13; // [esp+0h] [ebp-B0h]
  SIZE_T v14; // [esp+0h] [ebp-B0h]
  SIZE_T *v15; // [esp+4h] [ebp-ACh]
  SIZE_T *v16; // [esp+4h] [ebp-ACh]
  _BYTE v17[36]; // [esp+10h] [ebp-A0h] BYREF
  _DWORD v18[3]; // [esp+34h] [ebp-7Ch] BYREF
  PKTHREAD CurrentThread; // [esp+4Ch] [ebp-64h]
  volatile void *v20[9]; // [esp+50h] [ebp-60h] BYREF
  _DWORD v21[2]; // [esp+74h] [ebp-3Ch] BYREF
  int v22; // [esp+80h] [ebp-30h] BYREF
  unsigned int v23; // [esp+84h] [ebp-2Ch] BYREF
  int v24; // [esp+88h] [ebp-28h]
  SIZE_T Augend; // [esp+8Ch] [ebp-24h] BYREF
  int v26; // [esp+90h] [ebp-20h]
  char v27; // [esp+96h] [ebp-1Ah] BYREF
  char v28; // [esp+97h] [ebp-19h] BYREF
  CPPEH_RECORD ms_exc; // [esp+98h] [ebp-18h]

  v3 = 0;
  v24 = 0;
  memset(v17, 0, sizeof(v17));
  Augend = 0;
  v23 = 0;
  v22 = 0;
  v26 = 0;
  *a3 = 0;
  v21[0] = a1;
  v21[1] = a2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v27);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v28);
  EtwTraceBeginCallback(60);
  v4 = KeUserModeCallback(60, v21, 8, &v23, &v22);
  EtwTraceEndCallback(60);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v28);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v27);
  if ( v4 < 0 || v22 != 12 )
    return v26;
  ms_exc.registration.TryLevel = 0;
  v5 = (int *)v23;
  if ( v23 + 4 < v23 || v23 + 4 > _MmUserProbeAddress )
    v5 = (int *)_MmUserProbeAddress;
  v26 = *v5;
  ms_exc.registration.TryLevel = -2;
  if ( v26 != 2 )
    return v26;
  ms_exc.registration.TryLevel = 1;
  v26 = 0;
  v6 = *(_DWORD *)(_gptiCurrent + 276);
  if ( v6 && (*(_BYTE *)(v6 + 44) & 1) != 0 && *(_BYTE **)(v6 + 52) == v17 )
  {
    ms_exc.registration.TryLevel = -2;
    return v26;
  }
  ms_exc.registration.TryLevel = 2;
  v7 = *(char **)(v23 + 8);
  if ( v7 + 36 < v7 || (unsigned int)(v7 + 36) > _MmUserProbeAddress )
    v7 = (char *)_MmUserProbeAddress;
  qmemcpy(v20, v7, sizeof(v20));
  qmemcpy(v17, v20, sizeof(v17));
  ms_exc.registration.TryLevel = 1;
  v26 = 2;
  if ( (int)v20[5] >= 0
    && (int)v20[8] >= 0
    && SIZETAdd((SIZE_T)&Augend, v13, v15) >= 0
    && SIZETAdd((SIZE_T)&Augend, v14, v16) >= 0 )
  {
    v8 = Augend;
    if ( Augend < 0x48 )
    {
      v8 = 72;
      Augend = 72;
    }
    v3 = Win32AllocPool(v8, 1164211029);
  }
  v24 = v3;
  if ( v3 )
  {
    memset(v18, 0, sizeof(v18));
    *a3 = v3;
    qmemcpy((void *)v3, v20, 0x24u);
    v9 = (char *)v20[5];
    if ( v20[5] )
    {
      ProbeForRead(v20[4], (SIZE_T)v20[5], 1u);
      memcpy((void *)(v3 + 36), (const void *)v20[4], (size_t)v9);
    }
    v10 = v20[8];
    if ( v20[8] )
    {
      ProbeForRead(v20[7], (SIZE_T)v20[8], 1u);
      memcpy(&v9[v3 + 36], (const void *)v20[7], (size_t)v10);
    }
    PushW32ThreadLock(v3, v18, (int)Win32FreePool);
    xxxClientCopyDDEIn2((const void *)v3);
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    *(_DWORD *)(ThreadWin32Thread + 8) = v18[0];
    result = 2;
  }
  else
  {
    result = 3;
    v26 = 3;
  }
  ms_exc.registration.TryLevel = -2;
  return result;
}
