/*
 * XREFs of _xxxClientCopyDDEOut1@4 @ 0x193E2A
 * Callers:
 *     ?xxxCopyDDEOut@@YGPAXPAUtagINTDDEINFO@@PAPAX@Z @ 0x17F3F5 (-xxxCopyDDEOut@@YGPAXPAUtagINTDDEINFO@@PAPAX@Z.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?xxxClientCopyDDEOut2@@YGKPAUtagINTDDEINFO@@@Z @ 0x18966E (-xxxClientCopyDDEOut2@@YGKPAUtagINTDDEINFO@@@Z.c)
 */

int __thiscall xxxClientCopyDDEOut1(size_t *this)
{
  int v1; // esi
  int *v2; // ecx
  int v3; // ebx
  int v4; // eax
  char *v5; // esi
  size_t *v6; // edi
  SIZE_T v7; // eax
  SIZE_T v8; // eax
  _BYTE v10[36]; // [esp+10h] [ebp-A8h] BYREF
  _DWORD v11[9]; // [esp+34h] [ebp-84h] BYREF
  _DWORD v12[9]; // [esp+58h] [ebp-60h] BYREF
  size_t *v13; // [esp+8Ch] [ebp-2Ch]
  int v14; // [esp+90h] [ebp-28h]
  int v15; // [esp+94h] [ebp-24h] BYREF
  unsigned int v16; // [esp+98h] [ebp-20h] BYREF
  char v17; // [esp+9Eh] [ebp-1Ah] BYREF
  char v18; // [esp+9Fh] [ebp-19h] BYREF
  CPPEH_RECORD ms_exc; // [esp+A0h] [ebp-18h]

  v13 = this;
  memset(v11, 0, sizeof(v11));
  v16 = 0;
  v15 = 0;
  qmemcpy(v10, this, sizeof(v10));
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v17);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v18);
  EtwTraceBeginCallback(62);
  v1 = KeUserModeCallback(62, v10, 36, &v16, &v15);
  EtwTraceEndCallback(62);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v18);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v17);
  if ( v1 < 0 || v15 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v2 = (int *)v16;
  if ( v16 + 4 < v16 || v16 + 4 > _MmUserProbeAddress )
    v2 = (int *)_MmUserProbeAddress;
  v3 = *v2;
  v14 = v3;
  ms_exc.registration.TryLevel = -2;
  if ( !v3 )
    return v3;
  ms_exc.registration.TryLevel = 1;
  v4 = *(_DWORD *)(_gptiCurrent + 276);
  if ( !v4 || (*(_BYTE *)(v4 + 44) & 1) == 0 || *(_DWORD **)(v4 + 52) != v11 )
  {
    ms_exc.registration.TryLevel = 2;
    v5 = *(char **)(v16 + 8);
    if ( v5 + 36 < v5 || (unsigned int)(v5 + 36) > _MmUserProbeAddress )
      v5 = (char *)_MmUserProbeAddress;
    qmemcpy(v12, v5, sizeof(v12));
    qmemcpy(v11, v12, sizeof(v11));
    ms_exc.registration.TryLevel = 1;
    v6 = v13;
    v7 = v13[5];
    if ( v7 )
    {
      ProbeForWrite((volatile void *)v12[4], v7, 1u);
      memcpy((void *)v12[4], v6 + 9, v6[5]);
    }
    v8 = v6[8];
    if ( v8 )
    {
      ProbeForWrite((volatile void *)v12[7], v8, 1u);
      memcpy((void *)v12[7], (char *)v6 + v6[5] + 36, v6[8]);
    }
    if ( v12[3] && xxxClientCopyDDEOut2(v11) && (v11[2] & 0x800) != 0 )
    {
      v3 = v11[3];
      v14 = v11[3];
    }
    qmemcpy(v6, v11, 0x24u);
    ms_exc.registration.TryLevel = -2;
    return v3;
  }
  ms_exc.registration.TryLevel = -2;
  return 0;
}
