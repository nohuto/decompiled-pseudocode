/*
 * XREFs of ?SetReferenceProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01F29C0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C0098C10 (Win32AllocPoolWithQuota.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01D0E54 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x1C01D1DCC (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 *     ?FindProperty@CGenericMarshaler@DirectComposition@@IEAA?AVCPropertyIterator@2@I@Z @ 0x1C01F27D0 (-FindProperty@CGenericMarshaler@DirectComposition@@IEAA-AVCPropertyIterator@2@I@Z.c)
 *     ?FreeValue@CReferenceProperty@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01F2800 (-FreeValue@CReferenceProperty@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
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
  bool *v12; // rax
  __int64 *v13; // [rsp+40h] [rbp+8h] BYREF

  DirectComposition::CGenericMarshaler::FindProperty((__int64)this, &v13, a3);
  if ( v13 == (__int64 *)(*((_QWORD *)this + 8) + 8LL * *((_QWORD *)this + 9)) )
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
      Win32FreePool(v10);
      return 3221225495LL;
    }
  }
  else
  {
    v10 = *v13;
    if ( *(_BYTE *)(*v13 + 4) != 4 )
      v10 = 0LL;
    if ( !v10 )
      return 3221225485LL;
  }
  if ( a4 )
    DirectComposition::CResourceMarshaler::AddRef(a4);
  DirectComposition::CReferenceProperty::FreeValue((DirectComposition::CReferenceProperty *)v10, a2);
  v12 = a5;
  *(_QWORD *)(v10 + 8) = a4;
  *(_BYTE *)(v10 + 5) = 1;
  *v12 = 1;
  return 0LL;
}
