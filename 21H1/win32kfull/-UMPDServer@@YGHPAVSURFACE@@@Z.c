/*
 * XREFs of ?UMPDServer@@YGHPAVSURFACE@@@Z @ 0x20FC34
 * Callers:
 *     ?bEndDocInternal@@YGHPAUHDC__@@KG@Z @ 0xF6AD2 (-bEndDocInternal@@YGHPAUHDC__@@KG@Z.c)
 * Callees:
 *     ?vServer@UMPDOBJ@@QAEXPAX@Z @ 0x1F474D (-vServer@UMPDOBJ@@QAEXPAX@Z.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 */

int __thiscall UMPDServer(_DWORD *this)
{
  UMPDOBJ *v2; // ecx
  int v3; // edi
  int v5; // [esp+Ch] [ebp-4h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v5);
  v3 = 0;
  if ( v5 && *(_DWORD *)(v5 + 232) )
  {
    UMPDOBJ::vServer(v2, this != 0 ? this + 4 : 0);
    v3 = 1;
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v5);
  return v3;
}
