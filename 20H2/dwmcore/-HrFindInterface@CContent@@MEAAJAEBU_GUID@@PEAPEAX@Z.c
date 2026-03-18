/*
 * XREFs of ?HrFindInterface@CContent@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077BC0
 * Callers:
 *     ?HrFindInterface@CCompositionSurfaceBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009E470 (-HrFindInterface@CCompositionSurfaceBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CGenericInk@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801C25F0 (-HrFindInterface@CGenericInk@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CHwndBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801C3E80 (-HrFindInterface@CHwndBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CContent::HrFindInterface(CContent *this, const struct _GUID *a2, CContent **a3)
{
  CContent *v3; // r9
  __int64 result; // rax
  __int64 v5; // rax
  CContent *v6; // rax

  v3 = this;
  result = 2147942487LL;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2d681593_1e98_4679_bde5_5b9677677b1f.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2d681593_1e98_4679_bde5_5b9677677b1f.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2d681593_1e98_4679_bde5_5b9677677b1f.Data4;
    if ( v5 )
    {
      result = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
        result = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
      if ( result )
      {
        result = 2147500034LL;
        v3 = 0LL;
      }
      *a3 = v3;
    }
    else
    {
      if ( this )
        v6 = (CContent *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56);
      else
        v6 = 0LL;
      *a3 = v6;
      return 0LL;
    }
  }
  return result;
}
