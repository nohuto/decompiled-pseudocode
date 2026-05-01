/*
 * XREFs of ?get_DropEffect@CDragVisualAcc@@UEAAJPEAPEAG@Z @ 0x18042E9A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDragVisualAcc::get_DropEffect(CDragVisualAcc *this, unsigned __int16 **a2)
{
  const OLECHAR *v2; // rax
  const OLECHAR *v4; // rcx
  unsigned __int16 *v5; // rax

  v2 = (const OLECHAR *)*((_QWORD *)this + 17);
  v4 = &szAgent;
  if ( v2 )
    v4 = v2;
  v5 = SysAllocString(v4);
  *a2 = v5;
  return v5 == 0LL ? 0x8007000E : 0;
}
