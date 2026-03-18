/*
 * XREFs of ?HrFindInterface@CGdiSpriteBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C84D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::HrFindInterface(CGdiSpriteBitmap *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  char *v5; // rax
  __int64 v6; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data4;
    if ( v4 )
    {
      v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ad440399_8921_4bea_82ab_e130645b9e3a.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ad440399_8921_4bea_82ab_e130645b9e3a.Data1 )
        v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ad440399_8921_4bea_82ab_e130645b9e3a.Data4;
      if ( v6 )
        return CMILCOMBase::HrFindInterface(this, a2, a3);
      v5 = (char *)(((unsigned __int64)this + 56) & -(__int64)(this != 0LL));
    }
    else if ( this )
    {
      v5 = (char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64;
    }
    else
    {
      v5 = 0LL;
    }
    *a3 = v5;
    return 0LL;
  }
  return result;
}
