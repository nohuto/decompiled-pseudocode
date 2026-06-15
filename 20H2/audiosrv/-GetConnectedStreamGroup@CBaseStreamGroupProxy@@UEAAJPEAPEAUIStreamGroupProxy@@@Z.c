/*
 * XREFs of ?GetConnectedStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x1800E4C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseStreamGroupProxy::GetConnectedStreamGroup(
        CBaseStreamGroupProxy *this,
        struct IStreamGroupProxy **a2)
{
  return (**(__int64 (__fastcall ***)(CBaseStreamGroupProxy *, GUID *, struct IStreamGroupProxy **))this)(
           this,
           &GUID_e969a7df_0ef8_4763_9e1a_d1296f5f5adf,
           a2);
}
