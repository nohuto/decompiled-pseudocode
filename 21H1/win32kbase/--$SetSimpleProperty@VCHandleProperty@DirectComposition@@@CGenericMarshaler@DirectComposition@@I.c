/*
 * XREFs of ??$SetSimpleProperty@VCHandleProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIPEAXPEA_N@Z @ 0x1C01D6264
 * Callers:
 *     ?SetHandleProperty@CGenericMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C01D77E0 (-SetHandleProperty@CGenericMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C008F360 (Win32AllocPoolWithQuota.c)
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x1C01D7D4C (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 *     ?FindProperty@CGenericMarshaler@DirectComposition@@IEAA?AVCPropertyIterator@2@I@Z @ 0x1C01F8200 (-FindProperty@CGenericMarshaler@DirectComposition@@IEAA-AVCPropertyIterator@2@I@Z.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetSimpleProperty<DirectComposition::CHandleProperty>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _BYTE *a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 *v13; // [rsp+40h] [rbp+8h] BYREF

  DirectComposition::CGenericMarshaler::FindProperty(a1, &v13, a2);
  if ( v13 == (__int64 *)(*(_QWORD *)(a1 + 64) + 8LL * *(_QWORD *)(a1 + 72)) )
  {
    v8 = Win32AllocPoolWithQuota(16LL, 0);
    v9 = v8;
    if ( v8 )
    {
      *(_DWORD *)v8 = a2;
      *(_WORD *)(v8 + 4) = 3;
    }
    else
    {
      v9 = 0LL;
    }
    if ( !v9 )
      return 3221225495LL;
    if ( !DirectComposition::CGenericPropertyList::push_back(
            (DirectComposition::CGenericPropertyList *)(a1 + 64),
            (struct DirectComposition::CGenericProperty *)v9) )
    {
      Win32FreePool(v9, v11, v12);
      return 3221225495LL;
    }
  }
  else
  {
    v9 = *v13;
    if ( *(_BYTE *)(*v13 + 4) != 3 )
      v9 = 0LL;
    if ( !v9 )
      return 3221225485LL;
  }
  *(_QWORD *)(v9 + 8) = a3;
  result = 0LL;
  *(_BYTE *)(v9 + 5) = 1;
  *a4 = 1;
  return result;
}
