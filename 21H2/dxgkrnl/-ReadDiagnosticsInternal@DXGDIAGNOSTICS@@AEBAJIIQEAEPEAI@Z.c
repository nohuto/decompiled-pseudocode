/*
 * XREFs of ?ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z @ 0x1C0052DD8
 * Callers:
 *     ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0012520 (-WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C0052D10 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?CopyFromBuffer@DXGDIAGNOSTICS@@AEBAXIIQEAE@Z @ 0x1C0052A88 (-CopyFromBuffer@DXGDIAGNOSTICS@@AEBAXIIQEAE@Z.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::ReadDiagnosticsInternal(
        DXGDIAGNOSTICS *this,
        int a2,
        unsigned int a3,
        unsigned __int8 *const a4,
        unsigned int *a5)
{
  unsigned int v5; // ebp
  unsigned int v6; // edi
  unsigned int v7; // r14d
  bool v10; // zf
  size_t v11; // r8
  unsigned int v12; // ebx
  unsigned int v13; // edx
  unsigned int v14; // r12d
  int v16; // [rsp+20h] [rbp-88h]
  unsigned __int8 *v17; // [rsp+28h] [rbp-80h]
  unsigned __int8 v19[16]; // [rsp+38h] [rbp-70h] BYREF
  __int128 v20; // [rsp+48h] [rbp-60h]
  __int128 v21; // [rsp+58h] [rbp-50h]

  v5 = *((_DWORD *)this + 8);
  v6 = 0;
  v7 = *((_DWORD *)this + 9);
  v17 = a4;
  v10 = v7 == v5;
  if ( v7 < v5 )
  {
    v7 += *((_DWORD *)this + 4);
    v10 = v7 == v5;
  }
  if ( !v10 )
  {
    if ( a2 == -1 )
    {
      if ( v7 > v5 )
      {
        v6 = v7 - v5;
        v11 = v7 - v5;
        if ( v7 - v5 > a3 )
          v11 = a3;
        DXGDIAGNOSTICS::CopyFromBuffer(this, v5, v11, a4);
      }
      goto LABEL_29;
    }
    v16 = 0;
    v12 = 0;
    if ( v5 >= v7 )
      goto LABEL_29;
    while ( 1 )
    {
      v13 = v5 % *((_DWORD *)this + 4);
      *(_OWORD *)v19 = 0LL;
      v20 = 0LL;
      v21 = 0LL;
      DXGDIAGNOSTICS::CopyFromBuffer(this, v13, 0x30uLL, v19);
      if ( SDWORD1(v21) < 0 || (DWORD1(v21) & 0x7FFFFFFF) == a2 )
      {
        if ( !v12 )
          v16 = v5 % *((_DWORD *)this + 4);
        v12 += *(_DWORD *)&v19[4];
        if ( v12 >= a3 && !a5 )
        {
LABEL_23:
          if ( v12 )
          {
            if ( a3 )
            {
              if ( v12 <= a3 )
                a3 = v12;
              DXGDIAGNOSTICS::CopyFromBuffer(this, v16, a3, v17);
            }
            v6 += v12;
          }
          break;
        }
      }
      else if ( v12 )
      {
        v14 = v12;
        if ( a3 < v12 )
          v14 = a3;
        if ( v14 )
        {
          DXGDIAGNOSTICS::CopyFromBuffer(this, v16, v14, v17);
          v17 += v14;
          a3 -= v14;
        }
        v6 += v12;
        v12 = 0;
      }
      v5 += *(_DWORD *)&v19[4];
      if ( v5 >= v7 )
        goto LABEL_23;
    }
  }
LABEL_29:
  if ( a5 )
    *a5 = v6;
  return 0LL;
}
