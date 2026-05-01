/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_382fa76d9980bbd2846dd440d3c3bc97__&_::Run @ 0x1803ECDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z @ 0x1803EEB8C (-UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_382fa76d9980bbd2846dd440d3c3bc97____::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 16);
  if ( !*(_BYTE *)(result + 314) )
  {
    if ( *(_BYTE *)(result + 315) )
    {
      *(_BYTE *)(result + 315) = 0;
      return WindowArrangementView::UpdateView(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 16) + 144LL, 0LL);
    }
  }
  return result;
}
