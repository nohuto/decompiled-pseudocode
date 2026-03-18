/*
 * XREFs of ?SetReferenceProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01F83F0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C008F360 (Win32AllocPoolWithQuota.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01D6DD4 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x1C01D7D4C (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 *     ?FindProperty@CGenericMarshaler@DirectComposition@@IEAA?AVCPropertyIterator@2@I@Z @ 0x1C01F8200 (-FindProperty@CGenericMarshaler@DirectComposition@@IEAA-AVCPropertyIterator@2@I@Z.c)
 *     ?FreeValue@CReferenceProperty@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01F8230 (-FreeValue@CReferenceProperty@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetReferenceProperty(
        DirectComposition::CGenericMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  bool *v14; // rax
  __int64 *v15; // [rsp+40h] [rbp+8h] BYREF

  DirectComposition::CGenericMarshaler::FindProperty((__int64)this, &v15, a3);
  if ( v15 == (__int64 *)(*((_QWORD *)this + 8) + 8LL * *((_QWORD *)this + 9)) )
  {
    v9 = Win32AllocPoolWithQuota(16LL, 0);
    v10 = v9;
    if ( v9 )
    {
      *(_DWORD *)v9 = a3;
      *(_WORD *)(v9 + 4) = 4;
      *(_QWORD *)(v9 + 8) = 0LL;
    }
    else
    {
      v10 = 0LL;
    }
    if ( !v10 )
      return 3221225495LL;
    if ( !DirectComposition::CGenericPropertyList::push_back(
            (DirectComposition::CGenericMarshaler *)((char *)this + 64),
            (struct DirectComposition::CGenericProperty *)v10) )
    {
      Win32FreePool(v10, v12, v13);
      return 3221225495LL;
    }
  }
  else
  {
    v10 = *v15;
    if ( *(_BYTE *)(*v15 + 4) != 4 )
      v10 = 0LL;
    if ( !v10 )
      return 3221225485LL;
  }
  if ( a4 )
    DirectComposition::CResourceMarshaler::AddRef(a4);
  DirectComposition::CReferenceProperty::FreeValue((DirectComposition::CReferenceProperty *)v10, a2);
  v14 = a5;
  *(_QWORD *)(v10 + 8) = a4;
  *(_BYTE *)(v10 + 5) = 1;
  *v14 = 1;
  return 0LL;
}
