/*
 * XREFs of sub_1800D6C50 @ 0x1800D6C50
 * Callers:
 *     <none>
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

char *__fastcall sub_1800D6C50(__int64 a1)
{
  char *v1; // rbx
  size_t v3; // rsi
  char *v4; // rax
  char *v5; // rsi
  int v6; // eax
  __int128 *v7; // rax
  int v8; // ecx
  __int128 v9; // xmm0
  __int128 *v10; // rax
  __int128 v11; // xmm0
  DWORD LengthSid; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rbp
  __int64 v16; // rcx

  v1 = *(char **)(a1 + 136);
  if ( !v1 )
  {
    v3 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    v4 = (char *)o_malloc(v3);
    v1 = v4;
    if ( !v4 )
      sub_1800B8610(-2147024882);
    memset(v4, 0, v3);
    *((_WORD *)v1 + 1) = v3;
    v1[1] = *(_BYTE *)(a1 + 132);
    *v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
    v5 = v1 + 44;
    v6 = *(_DWORD *)(a1 + 128);
    *((_DWORD *)v1 + 2) = 0;
    *((_DWORD *)v1 + 1) = v6;
    v7 = *(__int128 **)(a1 + 152);
    if ( v7 )
    {
      v9 = *v7;
      *((_DWORD *)v1 + 2) = 1;
      v8 = 3;
      *(_OWORD *)(v1 + 12) = v9;
    }
    else
    {
      v5 = v1 + 28;
      v8 = 2;
    }
    v10 = *(__int128 **)(a1 + 160);
    if ( v10 )
    {
      v11 = *v10;
      if ( *(_QWORD *)(a1 + 152) )
        *(_OWORD *)(v1 + 28) = v11;
      else
        *(_OWORD *)(v1 + 12) = v11;
      *((_DWORD *)v1 + 2) = v8;
    }
    else
    {
      v5 -= 16;
    }
    LengthSid = GetLengthSid((PSID)(a1 + 16));
    v14 = LengthSid;
    v15 = v5 - v1;
    if ( LengthSid )
    {
      if ( !v5 )
        goto LABEL_15;
      if ( a1 == -16 || v15 < LengthSid )
      {
        memset(v5, 0, v5 - v1);
        if ( a1 != -16 )
        {
          if ( v15 >= v14 )
            goto LABEL_25;
          *(_DWORD *)o__errno(v13) = 34;
LABEL_24:
          o__invalid_parameter_noinfo(v16);
LABEL_25:
          sub_1800B8610(-2147024809);
        }
LABEL_15:
        *(_DWORD *)o__errno(v13) = 22;
        goto LABEL_24;
      }
      memcpy(v5, (const void *)(a1 + 16), LengthSid);
    }
    *(_QWORD *)(a1 + 136) = v1;
  }
  return v1;
}
