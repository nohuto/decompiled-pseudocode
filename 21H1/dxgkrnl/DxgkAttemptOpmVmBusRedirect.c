/*
 * XREFs of DxgkAttemptOpmVmBusRedirect @ 0x1C015F9F8
 * Callers:
 *     DpiPdoHandleOpmIoctls @ 0x1C015F7EC (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0009604 (_tlgKeywordOn.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DXGKCALLONEXIT__lambda_0f534b3d3ec4016b5fe0be2c2202598e___ @ 0x1C001D184 (DXGKCALLONEXIT__lambda_0f534b3d3ec4016b5fe0be2c2202598e___.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@@Z @ 0x1C003A2B4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@@-$_tlgWriteTe.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ @ 0x1C015967C (-IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ.c)
 *     ?VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z @ 0x1C0246348 (-VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z.c)
 *     ?FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER@1@0@Z @ 0x1C02BF57C (-FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER@1@0@Z.c)
 */

__int64 __fastcall DxgkAttemptOpmVmBusRedirect(
        __int64 a1,
        int a2,
        unsigned int a3,
        void *a4,
        size_t a5,
        void *a6,
        unsigned int *a7,
        _DWORD *a8)
{
  const CHAR *v10; // rdi
  _DWORD *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  DXG_GUEST_GLOBAL_VMBUS *v22; // rsi
  struct DXGGLOBAL *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // esi
  __int64 v27; // rcx
  __int64 v28; // r8
  size_t Size; // [rsp+30h] [rbp-61h]
  char v30; // [rsp+48h] [rbp-49h] BYREF
  __int128 v31; // [rsp+58h] [rbp-39h] BYREF
  int v32; // [rsp+68h] [rbp-29h] BYREF
  __int64 v33; // [rsp+70h] [rbp-21h] BYREF
  int v34; // [rsp+78h] [rbp-19h]
  const CHAR *v35; // [rsp+80h] [rbp-11h] BYREF
  _QWORD v36[2]; // [rsp+88h] [rbp-9h] BYREF
  char v37; // [rsp+98h] [rbp+7h]
  unsigned int v38; // [rsp+E8h] [rbp+57h] BYREF

  v38 = a3;
  *(_QWORD *)&v31 = &v38;
  v10 = 0LL;
  *((_QWORD *)&v31 + 1) = &v30;
  v30 = 0;
  DXGKCALLONEXIT__lambda_0f534b3d3ec4016b5fe0be2c2202598e_((__int64)v36, &v31);
  v12 = a8;
  *a8 = -1073741823;
  Global = DXGGLOBAL::GetGlobal(v14, v13);
  if ( DXGGLOBAL::IsVmConnectedToHost(Global)
    && (v22 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)DXGGLOBAL::GetGlobal(v17, v16) + 183)) != 0LL
    && (v33 = a1,
        *(_QWORD *)&v31 = 0LL,
        DWORD2(v31) = 0,
        v34 = a2,
        v23 = DXGGLOBAL::GetGlobal(v21, v20),
        (int)REMOTEMONITORMAPPING::FindMappingFromGuestId(
               (struct DXGGLOBAL *)((char *)v23 + 304496),
               (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER *)&v33,
               (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER *)&v31) >= 0) )
  {
    LODWORD(Size) = a5;
    v30 = 1;
    *v12 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpmRequest(v22, (struct _LUID)v31, DWORD2(v31), v38, a4, Size, a6, a7);
    v18 = 1;
  }
  else
  {
    v18 = 0;
  }
  if ( v37
    && *(_DWORD *)v36[0] == 2303131
    && (unsigned int)dword_1C00AE9E8 > 5
    && tlgKeywordOn((__int64)&dword_1C00AE9E8, 0x400000100000LL) )
  {
    v26 = *(unsigned __int8 *)v36[1];
    v27 = *((_QWORD *)DXGPROCESS::GetCurrent(v25, v24) + 8);
    if ( v27 )
      v10 = *(const CHAR **)(v27 + 80);
    v35 = v10;
    LODWORD(a8) = v26;
    v32 = 2303131;
    v33 = 33556480LL;
    *(_QWORD *)&v31 = 1LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      v27,
      byte_1C007C43E,
      v28,
      (__int64)&v31,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&a8,
      &v35);
  }
  return v18;
}
