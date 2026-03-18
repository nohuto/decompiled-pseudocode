/*
 * XREFs of EditionUpdateInputTransformFromHitTest @ 0x1C0003060
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z @ 0x1C0003114 (-SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0003194 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0026844 (WPP_RECORDER_SF_qq.c)
 *     ?SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z @ 0x1C01D949C (-SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z.c)
 *     WPP_RECORDER_SF_qqi @ 0x1C01DA1F8 (WPP_RECORDER_SF_qqi.c)
 */

__int64 __fastcall EditionUpdateInputTransformFromHitTest(
        __int64 a1,
        struct tagWND *a2,
        struct tagWND *a3,
        unsigned __int64 *a4,
        struct tagWND *a5,
        struct tagINPUT_TRANSFORM *a6)
{
  InputTransform *v6; // rdi
  __int64 v7; // rbx
  int v8; // esi
  unsigned int v10; // r15d
  int v12; // edx
  int v13; // ecx
  void *v14; // r8
  int v15; // r9d
  int v16; // edx
  int v17; // ecx

  v6 = *(InputTransform **)(a1 + 80);
  v7 = 0LL;
  v8 = (int)a4;
  v10 = 0;
  if ( (!a2 || (unsigned int)SetCompositionInputWindowUIOwner(v6, a2)) && !v8 )
  {
    v10 = 1;
    if ( (unsigned int)InputTransform::StoreTransform(v6, a5, a6, a4) )
    {
      if ( !(unsigned int)InputTransform::SetCompositionInput(v6, a3, v14)
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 4;
        WPP_RECORDER_SF_qq(
          v17,
          v16,
          16,
          33,
          (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids,
          (char)v6,
          (char)a3);
      }
    }
    else
    {
      v10 = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqi(v13, v12, (_DWORD)v14, v15);
    }
  }
  if ( v6 )
    v7 = *(_QWORD *)v6;
  return EtwTraceDITResolveDCompInputHandleToHwnd(a3, v7, *(_QWORD *)a6, v10);
}
