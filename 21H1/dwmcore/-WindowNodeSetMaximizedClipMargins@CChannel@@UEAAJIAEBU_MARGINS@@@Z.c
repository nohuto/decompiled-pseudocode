/*
 * XREFs of ?WindowNodeSetMaximizedClipMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x1800CC7D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800386EC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180038BF4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180039020 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CChannel::WindowNodeSetMaximizedClipMargins(
        CChannel *this,
        unsigned int a2,
        const struct _MARGINS *a3)
{
  __int128 v6; // xmm0
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-28h] BYREF
  _OWORD v10[2]; // [rsp+24h] [rbp-24h]
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 203);
  v9 = 454;
  v10[0] = 0LL;
  v6 = (__int128)*a3;
  LODWORD(v10[0]) = a2;
  *(_OWORD *)((char *)v10 + 4) = v6;
  v7 = CChannel::SendCommand(this, &v9, 0x18u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v7;
}
