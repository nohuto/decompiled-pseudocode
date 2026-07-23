/*
 * XREFs of EtwpTraceIo @ 0x1403B8760
 * Callers:
 *     <none>
 * Callees:
 *     IoGetActivityIdIrp @ 0x14020DE30 (IoGetActivityIdIrp.c)
 *     EtwTraceSiloKernelEvent @ 0x14027BDBC (EtwTraceSiloKernelEvent.c)
 *     PsGetThreadServerSilo @ 0x1402AAE70 (PsGetThreadServerSilo.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     EtwpDiskProvTraceDisk @ 0x1405A878C (EtwpDiskProvTraceDisk.c)
 */

__int64 __fastcall EtwpTraceIo(int a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rsi
  char *v4; // r14
  __int64 ThreadServerSilo; // r11
  char v9; // dl
  unsigned int v10; // ecx
  unsigned int v11; // eax
  unsigned __int16 v12; // r10
  int v13; // eax
  int v14; // edi
  __int64 v15; // rcx
  int v16; // edx
  int v17; // r9d
  __int64 *v18; // r8
  __int128 *v19; // rax
  unsigned __int16 v20; // di
  __int64 result; // rax
  __int64 v22; // rax
  int v23; // eax
  __int128 *v24; // r9
  __int128 v25; // [rsp+38h] [rbp-39h] BYREF
  __int128 v26; // [rsp+48h] [rbp-29h]
  __int128 v27; // [rsp+58h] [rbp-19h]
  __int64 v28; // [rsp+68h] [rbp-9h]
  __int128 v29; // [rsp+70h] [rbp-1h] BYREF
  __int128 v30; // [rsp+80h] [rbp+Fh]
  __int128 *v31; // [rsp+90h] [rbp+1Fh] BYREF
  int v32; // [rsp+98h] [rbp+27h]
  int v33; // [rsp+9Ch] [rbp+2Bh]
  __int128 v34; // [rsp+A0h] [rbp+2Fh] BYREF

  v3 = *(_QWORD *)(a3 + 152);
  v4 = *(char **)(a3 + 184);
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( v3 )
    ThreadServerSilo = PsGetThreadServerSilo(v3);
  else
    ThreadServerSilo = 0LL;
  v9 = *v4;
  v10 = *(_DWORD *)(a3 + 16);
  if ( *v4 != 9 )
  {
    v11 = *(_DWORD *)(a3 + 56);
    *(_QWORD *)&v25 = __PAIR64__(v10, a2);
    *(_QWORD *)&v27 = a3;
    *((_QWORD *)&v25 + 1) = v11;
    v12 = (v9 != 3) + 266;
    *(_QWORD *)&v26 = *((_QWORD *)v4 + 3);
    *((_QWORD *)&v27 + 1) = *((_QWORD *)v4 + 1);
    if ( v3 )
      v13 = *(_DWORD *)(v3 + 1152);
    else
      v13 = -1;
    LODWORD(v28) = v13;
    if ( (a1 & 0xFFFF0000) == 0x56530000 )
    {
      HIDWORD(v25) = 1;
    }
    else
    {
      v14 = a1 & 0xFFFFFF;
      if ( v14 == 5460546 || v14 == 5467492 )
        HIDWORD(v25) = 2;
    }
    if ( (v10 & 8) != 0 )
    {
      v22 = *(_QWORD *)(a3 + 24);
      if ( v22 )
      {
        v15 = *(_QWORD *)(v22 + 192);
        if ( v15 )
          goto LABEL_25;
        v15 = *(_QWORD *)(*(_QWORD *)(v22 + 184) + 48LL);
LABEL_15:
        if ( v15 )
          goto LABEL_25;
      }
    }
    else
    {
      v15 = *(_QWORD *)(a3 + 192);
      if ( v15 )
      {
LABEL_25:
        *((_QWORD *)&v26 + 1) = *(_QWORD *)(v15 + 24);
        goto LABEL_17;
      }
      v16 = *(unsigned __int8 *)(a3 + 67);
      v17 = *(char *)(a3 + 66);
      if ( v16 <= v17 )
      {
        v18 = (__int64 *)(v4 + 48);
        while ( 1 )
        {
          v15 = *v18;
          if ( *v18 )
            goto LABEL_25;
          LOBYTE(v16) = v16 + 1;
          v18 += 9;
          if ( (unsigned __int8)v16 > v17 )
            goto LABEL_15;
        }
      }
    }
    *((_QWORD *)&v26 + 1) = 0LL;
LABEL_17:
    v19 = &v25;
    v32 = 52;
    v20 = v12;
    goto LABEL_18;
  }
  *(_QWORD *)&v29 = __PAIR64__(v10, a2);
  v20 = 270;
  *((_QWORD *)&v29 + 1) = *((_QWORD *)v4 + 1);
  *(_QWORD *)&v30 = a3;
  if ( v3 )
    v23 = *(_DWORD *)(v3 + 1152);
  else
    v23 = -1;
  DWORD2(v30) = v23;
  v19 = &v29;
  v32 = 28;
LABEL_18:
  v33 = 0;
  v31 = v19;
  EtwTraceSiloKernelEvent(ThreadServerSilo, (int)&v31, 1, 0x100u, v20, 4200451);
  result = EtwpHostSiloState + 4516;
  if ( EtwpHostSiloState != -4516 )
  {
    result = *(unsigned int *)result;
    if ( (result & 0x100) != 0 )
    {
      v34 = 0LL;
      if ( (unsigned int)IoGetActivityIdIrp(a3, &v34) )
        v24 = 0LL;
      else
        v24 = &v34;
      return EtwpDiskProvTraceDisk(v20, &v31, v3, v24);
    }
  }
  return result;
}
