/*
 * XREFs of ??$SetSimpleProperty@VCFloatProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIMPEA_N@Z @ 0x1C01CDE90
 * Callers:
 *     ?SetFloatProperty@CGenericMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C01CF4C0 (-SetFloatProperty@CGenericMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C0059700 (Win32AllocPoolWithQuota.c)
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x1C01CFA4C (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 *     ?FindProperty@CGenericMarshaler@DirectComposition@@IEAA?AVCPropertyIterator@2@I@Z @ 0x1C01F0EA0 (-FindProperty@CGenericMarshaler@DirectComposition@@IEAA-AVCPropertyIterator@2@I@Z.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetSimpleProperty<DirectComposition::CFloatProperty>(
        __int64 a1,
        unsigned int a2,
        float a3,
        _BYTE *a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 *v10; // [rsp+50h] [rbp+8h] BYREF

  DirectComposition::CGenericMarshaler::FindProperty(a1, &v10, a2);
  if ( v10 == (__int64 *)(*(_QWORD *)(a1 + 64) + 8LL * *(_QWORD *)(a1 + 72)) )
  {
    v7 = Win32AllocPoolWithQuota(12LL, 0);
    v8 = v7;
    if ( v7 )
    {
      *(_DWORD *)v7 = a2;
      *(_WORD *)(v7 + 4) = 2;
    }
    else
    {
      v8 = 0LL;
    }
    if ( !v8 )
      return 3221225495LL;
    if ( !DirectComposition::CGenericPropertyList::push_back(
            (DirectComposition::CGenericPropertyList *)(a1 + 64),
            (struct DirectComposition::CGenericProperty *)v8) )
    {
      Win32FreePool(v8);
      return 3221225495LL;
    }
  }
  else
  {
    v8 = *v10;
    if ( *(_BYTE *)(*v10 + 4) != 2 )
      v8 = 0LL;
    if ( !v8 )
      return 3221225485LL;
  }
  *(float *)(v8 + 8) = a3;
  result = 0LL;
  *(_BYTE *)(v8 + 5) = 1;
  *a4 = 1;
  return result;
}
