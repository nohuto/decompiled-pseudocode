/*
 * XREFs of ?ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C0261250
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025F2C4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01306EC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall ForceGpupTdr(struct _D3DKMT_DRT_ESCAPE_HEAD *a1, __int64 a2)
{
  __int64 v2; // rax
  struct DXGGLOBAL *Global; // rax

  if ( *((_DWORD *)a1 + 1) < 0x10u )
  {
    v2 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v2 + 24) = 168LL;
LABEL_3:
    WdLogEvent5_WdError(v2);
    return 3221225485LL;
  }
  if ( *((_DWORD *)a1 + 3) )
  {
    v2 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v2 + 24) = 174LL;
    goto LABEL_3;
  }
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  DXGGLOBAL::IterateAdaptersWithCallback(
    (__int64)Global,
    (__int64 (__fastcall *)(_QWORD *, __int64))ForceGpupTdrCallback,
    0LL,
    0);
  return 0LL;
}
