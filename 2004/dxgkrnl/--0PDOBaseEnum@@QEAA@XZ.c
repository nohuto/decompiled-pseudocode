/*
 * XREFs of ??0PDOBaseEnum@@QEAA@XZ @ 0x1C02BE9DC
 * Callers:
 *     ?FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ @ 0x1C02BEDD0 (-FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01306EC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

PDOBaseEnum *__fastcall PDOBaseEnum::PDOBaseEnum(PDOBaseEnum *this, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax
  SIZE_T v4; // rax
  PVOID v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  struct DXGGLOBAL *v9; // rax

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_QWORD *)this + 1) = 0LL;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  DXGGLOBAL::IterateAdaptersWithCallback(
    (__int64)Global,
    (__int64 (__fastcall *)(_QWORD *, __int64))PDOBaseEnum::CountPDOs,
    (__int64)this,
    0);
  v4 = 8LL * *(unsigned int *)this;
  if ( !is_mul_ok(*(unsigned int *)this, 8uLL) )
    v4 = -1LL;
  v5 = operator new[](v4, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 1) = v5;
  if ( v5 )
  {
    v9 = DXGGLOBAL::GetGlobal(v7, v6);
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)v9,
      (__int64 (__fastcall *)(_QWORD *, __int64))PDOBaseEnum::EnumPDOs,
      (__int64)this,
      0);
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v8 + 24) = 263LL;
    WdLogEvent5_WdError(v8);
  }
  return this;
}
