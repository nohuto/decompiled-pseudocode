/*
 * XREFs of ?HrFindInterface@CHolographicExclusiveView@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180255290
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CMILCOMBase@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C5380 (-HrFindInterface@CMILCOMBase@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CHolographicExclusiveView::HrFindInterface(
        CHolographicExclusiveView *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    result = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_92c14223_53b5_489b_b195_4227022eda18.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_92c14223_53b5_489b_b195_4227022eda18.Data1 )
      result = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_92c14223_53b5_489b_b195_4227022eda18.Data4;
    if ( result )
      return CMILCOMBase::HrFindInterface(this, a2, a3);
    else
      *a3 = this;
  }
  return result;
}
