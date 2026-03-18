/*
 * XREFs of ?CopyToBuffer@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@H@Z @ 0x1C0052AFC
 * Callers:
 *     ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0012520 (-WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     memmove @ 0x1C002CD00 (memmove.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::CopyToBuffer(DXGDIAGNOSTICS *this, struct _DXGK_DIAG_HEADER *a2, int a3)
{
  unsigned int v3; // r14d
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // r8d
  void *v10; // rcx
  unsigned int v11; // ebp

  v3 = 0;
  v7 = 48;
  if ( !a3 )
    v7 = *((_DWORD *)a2 + 1);
  v8 = *((_DWORD *)this + 9);
  v9 = *((_DWORD *)this + 4);
  v10 = (void *)(*((_QWORD *)this + 7) + v8);
  v11 = v8 + v7;
  if ( v8 + v7 <= v9 )
  {
    memmove(v10, a2, v7);
  }
  else
  {
    memmove(v10, a2, v9 - v8);
    memmove(
      *((void **)this + 7),
      (char *)a2 + (unsigned int)(*((_DWORD *)this + 4) - *((_DWORD *)this + 9)),
      v11 - *((_DWORD *)this + 4));
    v3 = 1;
  }
  if ( !a3 )
    *((_DWORD *)this + 9) = v11 % *((_DWORD *)this + 4);
  return v3;
}
