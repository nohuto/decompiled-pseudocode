/*
 * XREFs of ?MatrixTransform3DUpdate@CChannel@@UEAAJIAEBU_D3DMATRIX@@@Z @ 0x1801AB510
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18007333C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 */

__int64 __fastcall CChannel::MatrixTransform3DUpdate(
        CDataStreamWriter **this,
        unsigned int a2,
        const struct _D3DMATRIX *a3)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  unsigned int v10; // ebx
  int v12; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v13; // [rsp+24h] [rbp-54h] BYREF
  __int128 v14; // [rsp+28h] [rbp-50h]
  __int128 v15; // [rsp+38h] [rbp-40h]
  __int128 v16; // [rsp+48h] [rbp-30h]
  __int128 v17; // [rsp+58h] [rbp-20h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+80h] [rbp+8h] BYREF

  v18 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  CChannel::CheckHandle((__int64)this, a2, 108);
  v12 = 487;
  memset_0(&v13, 0, 0x44uLL);
  v6 = *(_OWORD *)&a3->_11;
  v7 = *(_OWORD *)&a3->_21;
  v13 = a2;
  v14 = v6;
  v8 = *(_OWORD *)&a3->_31;
  v15 = v7;
  v9 = *(_OWORD *)&a3->_41;
  v16 = v8;
  v17 = v9;
  v10 = CChannel::SendCommand(this, &v12, 0x48u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v18);
  return v10;
}
