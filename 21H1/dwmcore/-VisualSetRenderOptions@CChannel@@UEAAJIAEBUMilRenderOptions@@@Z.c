/*
 * XREFs of ?VisualSetRenderOptions@CChannel@@UEAAJIAEBUMilRenderOptions@@@Z @ 0x1800C9E70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800386EC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180038BF4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180039020 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CChannel::VisualSetRenderOptions(CChannel *this, unsigned int a2, const struct MilRenderOptions *a3)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  unsigned int v8; // ebx
  _DWORD v10[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v11[40]; // [rsp+28h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+60h] [rbp+10h] BYREF

  v12 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 195);
  v6 = *((_OWORD *)a3 + 1);
  v10[0] = 428;
  v10[1] = a2;
  memset(&v11[4], 0, 32);
  v7 = *(_OWORD *)a3;
  *(_OWORD *)&v11[16] = v6;
  *(_OWORD *)v11 = v7;
  *(_QWORD *)&v11[32] = *((_QWORD *)a3 + 4);
  v8 = CChannel::SendCommand(this, v10, 0x30u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
  return v8;
}
