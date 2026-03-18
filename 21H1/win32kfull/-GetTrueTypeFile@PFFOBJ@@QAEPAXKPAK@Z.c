/*
 * XREFs of ?GetTrueTypeFile@PFFOBJ@@QAEPAXKPAK@Z @ 0x2292BD
 * Callers:
 *     ?pvFile@RFONTOBJ@@QAEPAXPAK@Z @ 0x2098FD (-pvFile@RFONTOBJ@@QAEPAXPAK@Z.c)
 *     ?pvFileUMPD@RFONTOBJ@@QAEPAXPAKPAPAX@Z @ 0x209958 (-pvFileUMPD@RFONTOBJ@@QAEPAXPAKPAPAX@Z.c)
 * Callees:
 *     ??1ATTACHOBJ@@QAE@XZ @ 0x8735E (--1ATTACHOBJ@@QAE@XZ.c)
 *     ??0ATTACHOBJ@@QAE@PAVPFFOBJ@@@Z @ 0x8737C (--0ATTACHOBJ@@QAE@PAVPFFOBJ@@@Z.c)
 */

int __thiscall PFFOBJ::GetTrueTypeFile(PFFOBJ *this, unsigned int a2, unsigned int *a3)
{
  int v3; // edi
  int (__stdcall *v4)(unsigned int, unsigned int *); // esi
  _BYTE v6[8]; // [esp+8h] [ebp-8h] BYREF

  v3 = 0;
  v4 = *(int (__stdcall **)(unsigned int, unsigned int *))(*(_DWORD *)(*(_DWORD *)this + 60) + 2100);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v6, this);
  *a3 = 0;
  if ( v4 )
    v3 = v4(a2, a3);
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v6);
  return v3;
}
