/*
 * XREFs of ?CachedVisualImageUpdate@CChannel@@UEAAJIAEBUMilRectF@@AEBUMilSizeD@@IIIW4Enum@MilBrushMappingMode@@W44MilStretch@@@Z @ 0x1800D2F70
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18006677C (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800688AC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180068DB4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800691E0 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 */

__int64 __fastcall CChannel::CachedVisualImageUpdate(
        __int64 a1,
        unsigned int a2,
        __int128 *a3,
        __int128 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v13; // esi
  int v14; // edi
  int v15; // ebx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  unsigned int v18; // ebx
  int v20; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v21; // [rsp+24h] [rbp-4Ch] BYREF
  __int128 v22; // [rsp+28h] [rbp-48h]
  __int128 v23; // [rsp+38h] [rbp-38h]
  int v24; // [rsp+48h] [rbp-28h]
  int v25; // [rsp+4Ch] [rbp-24h]
  int v26; // [rsp+50h] [rbp-20h]
  int v27; // [rsp+54h] [rbp-1Ch]
  int v28; // [rsp+64h] [rbp-Ch]
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+A0h] [rbp+30h] BYREF

  v29 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  CChannel::CheckHandle(a1, a2, 15);
  v13 = a5;
  CChannel::CheckOptionalHandle(a1, a5);
  v14 = a6;
  CChannel::CheckOptionalHandle(a1, a6);
  v15 = a7;
  CChannel::CheckOptionalHandle(a1, a7);
  v20 = 31;
  memset_0(&v21, 0, 0x44uLL);
  v16 = *a3;
  v27 = a8;
  v17 = *a4;
  v22 = v16;
  v21 = a2;
  v23 = v17;
  v24 = v13;
  v25 = v14;
  v26 = v15;
  v28 = a9;
  v18 = CChannel::SendCommand((CChannel *)a1, &v20, 0x48u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v29);
  return v18;
}
