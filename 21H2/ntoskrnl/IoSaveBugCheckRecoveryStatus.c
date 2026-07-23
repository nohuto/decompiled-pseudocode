/*
 * XREFs of IoSaveBugCheckRecoveryStatus @ 0x1405027E0
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x140524FC4 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403BAEC0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     IopWriteBugCheckSelEntries @ 0x140504B1C (IopWriteBugCheckSelEntries.c)
 */

LONG __fastcall IoSaveBugCheckRecoveryStatus(int *a1)
{
  int v2; // ecx
  char v3; // bl
  int v4; // r9d
  int v5; // edx
  __int128 *v6; // rcx
  LONG result; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v12; // [rsp+20h] [rbp-29h] BYREF
  __int128 v13; // [rsp+30h] [rbp-19h]
  __int64 v14; // [rsp+40h] [rbp-9h]
  __int128 v15; // [rsp+48h] [rbp-1h] BYREF
  __int128 v16; // [rsp+58h] [rbp+Fh]
  int v17; // [rsp+68h] [rbp+1Fh]
  _OWORD Src[2]; // [rsp+70h] [rbp+27h] BYREF
  char v19; // [rsp+90h] [rbp+47h]

  v19 = 0;
  LOBYTE(v17) = 0;
  v2 = *a1;
  v3 = 0;
  LODWORD(v14) = 0;
  v4 = v2 | 0x2A00;
  BYTE4(v14) = 0;
  memset(Src, 0, sizeof(Src));
  v15 = 0LL;
  v16 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      v3 = *((_BYTE *)a1 + 8);
      v5 = 5;
      v6 = &v12;
      LODWORD(v14) = MEMORY[0xFFFFF780000002C4];
      BYTE4(v14) = v3;
      goto LABEL_7;
    }
    v6 = &v15;
    LOBYTE(v17) = *((_BYTE *)a1 + 8);
  }
  else
  {
    v6 = Src;
    v19 = *((_BYTE *)a1 + 8);
  }
  v5 = 1;
LABEL_7:
  *((_DWORD *)v6 + 3) = 0;
  *((_DWORD *)v6 + 2) = v5 + 32;
  *(_DWORD *)v6 = 1733060695;
  *((_DWORD *)v6 + 1) = 1;
  *((_DWORD *)v6 + 5) = -2147483606;
  *((_DWORD *)v6 + 4) = v4;
  *((_DWORD *)v6 + 6) = 8;
  *((_DWORD *)v6 + 7) = v5;
  result = WheaLogInternalEvent(v6);
  if ( v3 )
    return IopWriteBugCheckSelEntries(
             v9,
             v8,
             v10,
             v11,
             v12,
             *((_QWORD *)&v12 + 1),
             v13,
             *((_QWORD *)&v13 + 1),
             v14,
             v15,
             *((_QWORD *)&v15 + 1),
             v16,
             *((_QWORD *)&v16 + 1),
             v17,
             *(_QWORD *)&Src[0]);
  return result;
}
