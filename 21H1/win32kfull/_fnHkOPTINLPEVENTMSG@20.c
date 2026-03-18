/*
 * XREFs of _fnHkOPTINLPEVENTMSG@20 @ 0x193333
 * Callers:
 *     _xxxHkCallHook@16 @ 0x6B2E0 (_xxxHkCallHook@16.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall fnHkOPTINLPEVENTMSG(int a1, int a2, void *a3, int a4, int a5)
{
  void *v5; // ebx
  int v6; // eax
  int v7; // esi
  int *v8; // ecx
  int v9; // edx
  int v10; // eax
  char *v11; // esi
  _DWORD v13[5]; // [esp+10h] [ebp-70h] BYREF
  _DWORD v14[5]; // [esp+24h] [ebp-5Ch] BYREF
  int v15; // [esp+38h] [ebp-48h]
  _BYTE v16[20]; // [esp+3Ch] [ebp-44h] BYREF
  int v17; // [esp+58h] [ebp-28h]
  int v18; // [esp+5Ch] [ebp-24h]
  int v19; // [esp+60h] [ebp-20h] BYREF
  unsigned int v20; // [esp+64h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+68h] [ebp-18h]

  v18 = a2;
  v20 = 0;
  v19 = 0;
  memset(v14, 0, sizeof(v14));
  v13[0] = a1;
  v13[1] = a2;
  v5 = a3;
  v13[2] = a3 != 0;
  if ( a3 )
    qmemcpy(v14, a3, sizeof(v14));
  v13[3] = a4;
  v13[4] = a5;
  v15 = 0;
  if ( a2 )
  {
    v6 = HMValidateHandle(v18, 5);
    if ( v6 )
    {
      if ( (*(_BYTE *)(v6 + 32) & 4) != 0 )
        v15 = 1;
    }
  }
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a4 + 3));
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a3 + 3));
  EtwTraceBeginCallback(49);
  v7 = KeUserModeCallback(49, v13, 44, &v20, &v19);
  EtwTraceEndCallback(49);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)((char *)&a3 + 3));
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&a4 + 3));
  if ( v7 >= 0 && v19 == 12 )
  {
    ms_exc.registration.TryLevel = 0;
    v8 = (int *)v20;
    if ( v20 + 4 < v20 || v20 + 4 > _MmUserProbeAddress )
      v8 = (int *)_MmUserProbeAddress;
    v9 = *v8;
    v17 = *v8;
    ms_exc.registration.TryLevel = -2;
    if ( !v5 )
      return v9;
    v10 = *(_DWORD *)(_gptiCurrent + 276);
    if ( !v10 || (*(_BYTE *)(v10 + 44) & 1) == 0 || *(void **)(v10 + 52) != v5 )
    {
      ms_exc.registration.TryLevel = 1;
      v11 = *(char **)(v20 + 8);
      if ( v11 + 20 < v11 || (unsigned int)(v11 + 20) > _MmUserProbeAddress )
        v11 = (char *)_MmUserProbeAddress;
      qmemcpy(v16, v11, sizeof(v16));
      qmemcpy(v5, v16, 0x14u);
      ms_exc.registration.TryLevel = -2;
      return v9;
    }
  }
  return -1;
}
