/*
 * XREFs of ?WindowNodeSetBounds@CChannel@@UEAAJIAEBUtagRECT@@00@Z @ 0x18009C9F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18009EB7C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18009F084 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18009F4B0 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CChannel::WindowNodeSetBounds(
        CChannel *this,
        unsigned int a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        const struct tagRECT *a5)
{
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  unsigned int v11; // ebx
  _DWORD v13[16]; // [rsp+20h] [rbp-40h] BYREF
  char *v14; // [rsp+80h] [rbp+20h] BYREF

  v14 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle(this, a2, 203LL);
  v9 = (__int128)*a4;
  v13[0] = 447;
  memset(&v13[1], 0, 48);
  v13[1] = a2;
  v10 = (__int128)*a3;
  *(_OWORD *)&v13[6] = v9;
  *(_OWORD *)&v13[2] = v10;
  *(struct tagRECT *)&v13[10] = *a5;
  v11 = CChannel::SendCommand(this, v13, 0x38u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v14);
  return v11;
}
