/*
 * XREFs of ?HrFindInterface@CAtlasBitmapResource@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180209B20
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CMILCOMBase@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C5380 (-HrFindInterface@CMILCOMBase@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CAtlasBitmapResource::HrFindInterface(CAtlasBitmapResource *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data4;
    if ( v4 )
    {
      return CMILCOMBase::HrFindInterface(this, a2, a3);
    }
    else
    {
      *a3 = (void *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
      return 0LL;
    }
  }
  return result;
}
