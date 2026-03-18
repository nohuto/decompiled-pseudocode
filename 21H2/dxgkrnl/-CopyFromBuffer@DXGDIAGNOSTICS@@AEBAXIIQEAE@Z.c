/*
 * XREFs of ?CopyFromBuffer@DXGDIAGNOSTICS@@AEBAXIIQEAE@Z @ 0x1C0052A88
 * Callers:
 *     ?ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z @ 0x1C0052DD8 (-ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z.c)
 * Callees:
 *     memmove @ 0x1C002CD00 (memmove.c)
 */

void __fastcall DXGDIAGNOSTICS::CopyFromBuffer(
        DXGDIAGNOSTICS *this,
        unsigned int a2,
        size_t a3,
        unsigned __int8 *const a4)
{
  unsigned int v4; // eax
  __int64 v6; // rbx
  __int64 v8; // rdx
  unsigned __int8 *v9; // rcx
  const void *v10; // rdx
  int v11; // ebp
  int v12; // eax

  v4 = *((_DWORD *)this + 4);
  v6 = a2;
  v8 = *((_QWORD *)this + 7);
  v9 = a4;
  v10 = (const void *)(v6 + v8);
  v11 = v6 + a3;
  if ( (int)v6 + (int)a3 <= v4 )
  {
    a3 = (unsigned int)a3;
  }
  else
  {
    memmove(a4, v10, v4 - (unsigned int)v6);
    v12 = *((_DWORD *)this + 4);
    v10 = (const void *)*((_QWORD *)this + 7);
    v9 = &a4[(unsigned int)(v12 - v6)];
    a3 = (unsigned int)(v11 - v12);
  }
  memmove(v9, v10, a3);
}
