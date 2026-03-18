/*
 * XREFs of ?PlatformAbort@NSInstrumentation@@YGXW4PLATFORMABORTREASON@1@PAX11@Z @ 0x249680
 * Callers:
 *     ?Free@?$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@IAEXPAX@Z @ 0x97C26 (-Free@-$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@IAEXPAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0DFAAA@$0DEI@@NSInstrumentation@@IAEXPAX@Z @ 0xD1070 (-Free@-$CTypeIsolation@$0DFAAA@$0DEI@@NSInstrumentation@@IAEXPAX@Z.c)
 *     ?FreeAssertPointerIsValid@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SGXPAXI@Z @ 0x183323 (-FreeAssertPointerIsValid@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumenta.c)
 *     ?Free@?$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@IAEXPAX@Z @ 0x184183 (-Free@-$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@IAEXPAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0FAAA@$0EI@@NSInstrumentation@@IAEXPAX@Z @ 0x1A2979 (-Free@-$CTypeIsolation@$0FAAA@$0EI@@NSInstrumentation@@IAEXPAX@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall NSInstrumentation::PlatformAbort(int a1, ULONG_PTR a2, ULONG_PTR BugCheckParameter3, int a4)
{
  int result; // eax
  int v5; // ecx
  int v6; // ecx

  result = 0;
  if ( !a1 )
    KeBugCheckEx(0x164u, 9u, a2, BugCheckParameter3, 0);
  v5 = a1 - 1;
  if ( !v5 )
    KeBugCheckEx(0x164u, 0x23u, a2, BugCheckParameter3, 0);
  v6 = v5 - 1;
  if ( !v6 )
    KeBugCheckEx(0x164u, 0x22u, a2, BugCheckParameter3, 0);
  if ( v6 == 1 )
    KeBugCheckEx(0x164u, 0x21u, a2, BugCheckParameter3, 0);
  return result;
}
