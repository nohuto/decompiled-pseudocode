/*
 * XREFs of rimObsReleaseAllTrackedHandles @ 0x1C0185964
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C005CEEC (RawInputManagerObjectDelete.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

void __fastcall rimObsReleaseAllTrackedHandles(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  _QWORD *v8; // rax

  v1 = (_QWORD *)(a1 + 128);
  v3 = *(_QWORD **)(a1 + 128);
  while ( v3 != v1 )
  {
    v4 = (__int64)v3;
    v3 = (_QWORD *)*v3;
    ObCloseHandle(*(HANDLE *)(v4 + 16), *(_BYTE *)(a1 + 72));
    v7 = *(_QWORD *)v4;
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || (v8 = *(_QWORD **)(v4 + 8), *v8 != v4) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    Win32FreePool(v4, v5, v6);
  }
}
