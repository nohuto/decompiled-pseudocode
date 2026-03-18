/*
 * XREFs of ?InsertAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo@CInputManager@@I@Z @ 0x1C01FBC40
 * Callers:
 *     ?UpdatePointerCapture@CInputManager@@SAJII@Z @ 0x1C01FBDF4 (-UpdatePointerCapture@CInputManager@@SAJII@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     ?Grow@?$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C01E68E8 (-Grow@-$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z.c)
 */

__int64 __fastcall CStructDynamicArray<CInputManager::PointerCaptureInfo>::InsertAt(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3)
{
  int v3; // ebx
  __int64 v5; // rsi
  __int64 v7; // rdx
  _QWORD *v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10

  v3 = 0;
  v5 = a3;
  if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)(a1 + 12)
    || (v3 = CDynamicArray<InjectManipulationArgs *,2003858261>::Grow(a1), v3 >= 0) )
  {
    if ( *(_DWORD *)(a1 + 8) >= *(_DWORD *)(a1 + 12) )
      v3 = -1073741823;
    if ( v3 >= 0 )
    {
      v8 = Win32AllocPoolZInit(8uLL, 0x64734344u);
      if ( !v8 )
        v3 = -1073741801;
      if ( v3 < 0 )
      {
        if ( v8 )
          Win32FreePool((__int64)v8, v7, (__int64)v8);
      }
      else
      {
        *v8 = *a2;
        LODWORD(v9) = *(_DWORD *)(a1 + 8);
        if ( (unsigned int)v9 > (unsigned int)v5 )
        {
          v10 = 8LL * (unsigned int)v9;
          do
          {
            v9 = (unsigned int)(v9 - 1);
            *(_QWORD *)(v10 + *(_QWORD *)a1) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v9);
            v10 -= 8LL;
          }
          while ( (unsigned int)v9 > (unsigned int)v5 );
        }
        *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = v8;
        ++*(_DWORD *)(a1 + 8);
      }
    }
  }
  return (unsigned int)v3;
}
