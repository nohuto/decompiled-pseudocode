/*
 * XREFs of ?CopyFromBuffer@DXGDIAGNOSTICS@@AEBAXIIQEAE@Z @ 0x1C000175C
 * Callers:
 *     ?ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z @ 0x1C00016AC (-ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z.c)
 * Callees:
 *     memmove @ 0x1C0028C40 (memmove.c)
 */

void __fastcall DXGDIAGNOSTICS::CopyFromBuffer(
        DXGDIAGNOSTICS *this,
        unsigned int a2,
        size_t a3,
        unsigned __int8 *const a4)
{
  unsigned int v4; // eax
  const void *v8; // rdx
  unsigned __int8 *v9; // rcx
  int v10; // ebp
  int v11; // eax

  v4 = *((_DWORD *)this + 4);
  v8 = (const void *)(*((_QWORD *)this + 6) + a2);
  v9 = a4;
  v10 = a2 + a3;
  if ( a2 + (unsigned int)a3 > v4 )
  {
    memmove(a4, v8, v4 - a2);
    v11 = *((_DWORD *)this + 4);
    v8 = (const void *)*((_QWORD *)this + 6);
    v9 = &a4[v11 - a2];
    a3 = (unsigned int)(v10 - v11);
  }
  else
  {
    a3 = (unsigned int)a3;
  }
  memmove(v9, v8, a3);
}
