/*
 * XREFs of DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C02779A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002E05C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C002EF70 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C026FE1C (GreAddBitmapD3DDirtyRgn.c)
 */

void __fastcall DxgkEngAddRedirBitmapD3DDirtyRgn(HDC a1, struct _RECTL **a2)
{
  __int64 v3; // r9
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  void (__fastcall *v7)(__int64, struct _RECTL **); // rax
  __int64 *v8[3]; // [rsp+20h] [rbp-18h] BYREF

  MDCOBJA::MDCOBJA((MDCOBJA *)v8, a1);
  v4 = v8[0];
  if ( v8[0] )
  {
    v5 = v8[0][6];
    if ( v5 )
    {
      v6 = v8[0][62];
      if ( (*(_DWORD *)(v6 + 116) & 1) != 0 )
      {
        ++*(_DWORD *)(v6 + 92);
        v7 = *(void (__fastcall **)(__int64, struct _RECTL **))(v5 + 3472);
        if ( v7 )
          v7((v4[62] + 24) & -(__int64)(v4[62] != 0), a2);
      }
    }
    if ( a2 )
      GreAddBitmapD3DDirtyRgn((HWND)v4[59], *(unsigned int *)a2, a2[1], v3);
    XDCOBJ::vAltUnlockFast(v8);
  }
}
