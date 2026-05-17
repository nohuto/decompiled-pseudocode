/*
 * XREFs of _RtlIsValidHandler@12 @ 0x4B2E9163
 * Callers:
 *     _RtlUnwind@16 @ 0x4B2E8E30 (_RtlUnwind@16.c)
 *     _RtlDispatchException@8 @ 0x4B2E8F8C (_RtlDispatchException@8.c)
 * Callees:
 *     _RtlCaptureImageExceptionValues@12 @ 0x4B2B9DFF (_RtlCaptureImageExceptionValues@12.c)
 *     _RtlpxLookupFunctionTable@8 @ 0x4B2BD6C0 (_RtlpxLookupFunctionTable@8.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlReportException@12 @ 0x4B33A4D0 (_RtlReportException@12.c)
 */

char __fastcall RtlIsValidHandler(_DWORD *a1, int a2, int a3)
{
  int v4; // edi
  int v5; // eax
  signed int v6; // ecx
  unsigned int v7; // esi
  signed int v8; // edx
  int v9; // edx
  _BYTE v11[4]; // [esp+Ch] [ebp-98h] BYREF
  int v12; // [esp+10h] [ebp-94h]
  char v13; // [esp+20h] [ebp-84h]
  int v14; // [esp+24h] [ebp-80h]
  int v15; // [esp+28h] [ebp-7Ch] BYREF
  int v16; // [esp+2Ch] [ebp-78h]
  int v17; // [esp+30h] [ebp-74h]
  int v18; // [esp+34h] [ebp-70h]
  int v19; // [esp+38h] [ebp-6Ch]
  int v20; // [esp+3Ch] [ebp-68h] BYREF
  unsigned int v21; // [esp+40h] [ebp-64h] BYREF
  int v22; // [esp+44h] [ebp-60h] BYREF
  _DWORD v23[21]; // [esp+48h] [ebp-5Ch] BYREF
  int savedregs; // [esp+A4h] [ebp+0h] BYREF

  v22 = a2;
  v4 = a3;
  v19 = a3;
  if ( (unsigned int)a1 < dword_4B3A9374[0] || (unsigned int)a1 >= dword_4B3A9374[0] + dword_4B3A9378[0] )
  {
    v5 = RtlpxLookupFunctionTable(&v15, a1, (int)&savedregs);
    a2 = v22;
  }
  else
  {
    v15 = dword_4B3A9370[0];
    v16 = dword_4B3A9370[1];
    v17 = dword_4B3A9370[2];
    v18 = dword_4B3A9370[3];
    v5 = dword_4B3A9370[0];
    v4 = v19;
  }
  if ( v5 )
  {
    v6 = v18;
    v7 = v16;
    v21 = v18;
  }
  else
  {
    v6 = v21;
    v7 = v20;
  }
  v20 = v5;
  if ( v5 && v6 )
  {
    if ( v5 == -1 && v6 == -1 )
    {
      memset(v23, 0, 0x50u);
      v23[5] = 1;
    }
    else
    {
      v21 = (unsigned int)a1 - v7;
      v8 = 0;
      v20 = 0;
      while ( v6 >= v8 )
      {
        v9 = (v6 + v8) >> 1;
        v4 = v19;
        if ( v21 >= *(_DWORD *)(v5 + 4 * v9) )
        {
          v4 = v19;
          if ( v21 <= *(_DWORD *)(v5 + 4 * v9) )
            return 1;
          v8 = v9 + 1;
          v20 = v8;
        }
        else
        {
          if ( !v9 )
            break;
          v6 = v9 - 1;
          v8 = v20;
        }
      }
      memset(v23, 0, 0x50u);
      v23[5] = 2;
    }
    goto LABEL_22;
  }
  if ( !a2 )
  {
    if ( (int)ZwQueryInformationProcess(-1, 34, &v22, 4, 0) >= 0 )
    {
      LOBYTE(a2) = v22;
    }
    else
    {
      LOBYTE(a2) = 0;
      v22 = 0;
    }
  }
  if ( (a2 & 0x30) == 0x30 || (int)NtQueryVirtualMemory(-1, a1, 0, v11, 28, 0) < 0 )
    return 1;
  if ( (v13 & 0xF0) != 0 )
  {
    if ( v14 == 0x1000000 )
    {
      RtlCaptureImageExceptionValues(v12, (unsigned int *)&v20, &v21);
      if ( v20 && v21 )
      {
        memset(v23, 0, 0x50u);
        v23[5] = 5;
        goto LABEL_22;
      }
    }
    else if ( (v22 & 0x20) == 0 )
    {
      memset(v23, 0, 0x50u);
      v23[5] = 4;
      goto LABEL_22;
    }
    return 1;
  }
  if ( (v22 & 0x10) != 0 )
    return 1;
  memset(v23, 0, 0x50u);
  v23[5] = 3;
LABEL_22:
  v23[1] = 1;
  v23[4] = 1;
  v23[0] = -1073741403;
  v23[3] = a1;
  RtlReportException(v23, v4, 0);
  return 0;
}
