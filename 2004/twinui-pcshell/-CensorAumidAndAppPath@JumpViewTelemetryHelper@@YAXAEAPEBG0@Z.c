/*
 * XREFs of ?CensorAumidAndAppPath@JumpViewTelemetryHelper@@YAXAEAPEBG0@Z @ 0x1801D7714
 * Callers:
 *     ?StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@JumpView@Shell@Internal@Windows@@W4JumpViewInvocationMethod@4567@@Z @ 0x1801DA278 (-StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@.c)
 * Callees:
 *     ?CensorPath@JumpViewTelemetryHelper@@YAPEBGPEBG@Z @ 0x1801D77B0 (-CensorPath@JumpViewTelemetryHelper@@YAPEBGPEBG@Z.c)
 */

void __fastcall JumpViewTelemetryHelper::CensorAumidAndAppPath(
        LPCWSTR *this,
        const unsigned __int16 **a2,
        const unsigned __int16 **a3)
{
  const WCHAR *v3; // r8
  unsigned __int64 v6; // rax
  const unsigned __int16 *v7; // rax
  const unsigned __int16 *v8; // rdx

  v3 = *this;
  if ( *this )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( v3[v6] );
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 >= 0x10 && CompareStringOrdinal(L"Microsoft.Edge.?", 16, v3, 16, 1) == 2 )
  {
    *this = L"Microsoft.Edge.?";
    v7 = &szAgent;
  }
  else
  {
    *this = JumpViewTelemetryHelper::CensorPath(*this, (const unsigned __int16 *)a2);
    v7 = JumpViewTelemetryHelper::CensorPath(*a2, v8);
  }
  *a2 = v7;
}
