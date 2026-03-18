/*
 * XREFs of ?vDelete@PFEOBJ@@QAEXXZ @ 0xCE12E
 * Callers:
 *     ?vPFFC_Delete@PFFOBJ@@QAEXPAVPFFCLEANUP@@@Z @ 0xCE01C (-vPFFC_Delete@PFFOBJ@@QAEXPAVPFFCLEANUP@@@Z.c)
 *     ?vDeletePFE@@YGXPAVPFE@@@Z @ 0x2294EE (-vDeletePFE@@YGXPAVPFE@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall PFEOBJ::vDelete(PFEOBJ *this)
{
  _DWORD *v2; // ecx
  int v3; // esi
  int v4; // eax
  void (__stdcall *v5)(_DWORD, _DWORD); // ecx
  void *v6; // ecx
  int v7; // eax
  int v8; // eax
  void (__stdcall *v9)(int, _DWORD); // edx
  int v10; // eax

  v2 = *(_DWORD **)this;
  v3 = *(_DWORD *)(*v2 + 60);
  if ( *(_BYTE *)(v2[5] + 44) == 2 && (v10 = v2[3]) != 0 && (*(_BYTE *)(v10 + 4) & 0x10) != 0 )
  {
    Win32FreePool(v2[3]);
  }
  else
  {
    v4 = v2[3];
    if ( v4 )
    {
      v9 = *(void (__stdcall **)(int, _DWORD))(v3 + 2068);
      if ( v9 )
        v9(v4, v2[4]);
    }
  }
  v5 = *(void (__stdcall **)(_DWORD, _DWORD))(v3 + 2068);
  if ( v5 )
  {
    v5(*(_DWORD *)(*(_DWORD *)this + 20), *(_DWORD *)(*(_DWORD *)this + 24));
    v6 = *(void **)(*(_DWORD *)this + 28);
    if ( v6 != &gkpNothing )
      (*(void (__stdcall **)(void *, _DWORD))(v3 + 2068))(v6, *(_DWORD *)(*(_DWORD *)this + 32));
  }
  *(_DWORD *)(*(_DWORD *)this + 12) = 0;
  *(_DWORD *)(*(_DWORD *)this + 20) = 0;
  *(_DWORD *)(*(_DWORD *)this + 28) = 0;
  v7 = *(_DWORD *)this;
  if ( *(_DWORD *)(*(_DWORD *)this + 44) )
  {
    Win32FreePool(*(_DWORD *)(*(_DWORD *)this + 44));
    *(_DWORD *)(*(_DWORD *)this + 44) = 0;
    v7 = *(_DWORD *)this;
  }
  v8 = *(_DWORD *)(v7 + 72);
  if ( v8 )
  {
    Win32FreePool(v8);
    *(_DWORD *)(*(_DWORD *)this + 72) = 0;
  }
  *(_DWORD *)this = 0;
}
