/*
 * XREFs of DxgkStopAdapters @ 0x1C030D840
 * Callers:
 *     DpiKsrCallback @ 0x1C0393E40 (DpiKsrCallback.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     DpiKsrSetBootGraphicsInformation @ 0x1C03944F0 (DpiKsrSetBootGraphicsInformation.c)
 *     DpiKsrStopAdapter @ 0x1C03945BC (DpiKsrStopAdapter.c)
 */

__int64 DxgkStopAdapters()
{
  __int64 result; // rax
  _QWORD *v1; // rdi
  _QWORD *i; // rbx
  struct _DEVICE_OBJECT *v3; // rcx

  result = (__int64)DXGGLOBAL_GetGlobal();
  v1 = (_QWORD *)(result + 800);
  for ( i = *(_QWORD **)(result + 800); i != v1 && i; i = (_QWORD *)*i )
  {
    v3 = (struct _DEVICE_OBJECT *)i[27];
    if ( v3 )
    {
      result = (__int64)v3->DeviceExtension;
      if ( result )
      {
        if ( *(_DWORD *)(result + 16) == 1953656900 && *(_DWORD *)(result + 20) == 2 && !*(_BYTE *)(result + 5000) )
        {
          result = DpiKsrStopAdapter(v3, 0LL);
          if ( (_DWORD)result != -1073741637 )
          {
            result = (unsigned int)(dword_1C01307F0 - 1);
            if ( (unsigned int)result <= 1 )
              result = DpiKsrSetBootGraphicsInformation();
          }
        }
      }
    }
  }
  return result;
}
