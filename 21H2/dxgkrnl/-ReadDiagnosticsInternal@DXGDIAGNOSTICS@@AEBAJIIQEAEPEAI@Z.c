/*
 * XREFs of ?ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z @ 0x1C00016AC
 * Callers:
 *     ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000AB2C (-WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C0045C24 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 * Callees:
 *     ?CopyFromBuffer@DXGDIAGNOSTICS@@AEBAXIIQEAE@Z @ 0x1C000175C (-CopyFromBuffer@DXGDIAGNOSTICS@@AEBAXIIQEAE@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
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
  unsigned int v8; // esi
  bool v10; // zf
  unsigned int v12; // ebx
  unsigned int v13; // edx
  unsigned int v14; // r12d
  int v15; // [rsp+20h] [rbp-88h]
  unsigned __int8 *v16; // [rsp+28h] [rbp-80h]
  unsigned __int8 v18[16]; // [rsp+38h] [rbp-70h] BYREF
  __int128 v19; // [rsp+48h] [rbp-60h]
  __int128 v20; // [rsp+58h] [rbp-50h]

  v5 = *((_DWORD *)this + 8);
  v6 = 0;
  v7 = *((_DWORD *)this + 9);
  v8 = a3;
  v16 = a4;
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
        if ( v7 - v5 <= a3 )
          v8 = v7 - v5;
        DXGDIAGNOSTICS::CopyFromBuffer(this, v5, v8, a4);
      }
      goto LABEL_9;
    }
    v15 = 0;
    v12 = 0;
    if ( v5 >= v7 )
      goto LABEL_9;
    while ( 1 )
    {
      v13 = v5 % *((_DWORD *)this + 4);
      *(_OWORD *)v18 = 0LL;
      v19 = 0LL;
      v20 = 0LL;
      DXGDIAGNOSTICS::CopyFromBuffer(this, v13, 0x30u, v18);
      if ( SDWORD1(v20) < 0 || (DWORD1(v20) & 0x7FFFFFFF) == a2 )
      {
        if ( !v12 )
          v15 = v5 % *((_DWORD *)this + 4);
        v12 += *(_DWORD *)&v18[4];
        if ( v12 >= v8 && !a5 )
        {
LABEL_26:
          if ( v12 )
          {
            if ( v8 )
            {
              if ( v12 <= v8 )
                v8 = v12;
              DXGDIAGNOSTICS::CopyFromBuffer(this, v15, v8, v16);
            }
            v6 += v12;
          }
          break;
        }
      }
      else if ( v12 )
      {
        v14 = v12;
        if ( v8 < v12 )
          v14 = v8;
        if ( v14 )
        {
          DXGDIAGNOSTICS::CopyFromBuffer(this, v15, v14, v16);
          v16 += v14;
          v8 -= v14;
        }
        v6 += v12;
        v12 = 0;
      }
      v5 += *(_DWORD *)&v18[4];
      if ( v5 >= v7 )
        goto LABEL_26;
    }
  }
LABEL_9:
  if ( a5 )
    *a5 = v6;
  return 0LL;
}
