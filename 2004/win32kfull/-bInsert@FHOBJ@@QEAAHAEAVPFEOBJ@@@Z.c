/*
 * XREFs of ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1C0010A10
 * Callers:
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C00108C4 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ?pwszName@FHOBJ@@QEAAPEAGAEAVPFEOBJ@@@Z @ 0x1C0010EA4 (-pwszName@FHOBJ@@QEAAPEAGAEAVPFEOBJ@@@Z.c)
 *     cCapString @ 0x1C00D9C0C (cCapString.c)
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00D9D6C (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEBGAEAVPFEOBJ@@H@Z @ 0x1C00D9EC8 (-bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEBGAEAVPFEOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall FHOBJ::bInsert(FHOBJ *this, struct PFEOBJ *a2)
{
  __int64 v4; // rax
  unsigned __int16 *v5; // rax
  struct _UNIVERSAL_FONT_ID *v6; // r9
  unsigned __int16 *v7; // rdx
  struct _HASHBUCKET *v8; // rax
  unsigned __int16 *v10; // rbx
  struct _HASHBUCKET *v12; // rax
  unsigned int v14; // [rsp+30h] [rbp-19h] BYREF
  __int64 v15; // [rsp+38h] [rbp-11h] BYREF
  unsigned __int16 v16[32]; // [rsp+40h] [rbp-9h] BYREF

  memset(v16, 0, sizeof(v16));
  v4 = *((_QWORD *)this + 1);
  v14 = 0;
  if ( !*(_DWORD *)(v4 + 4)
    && !_wcsicmp(
          (const wchar_t *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 16LL)),
          (const wchar_t *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 8LL))) )
  {
    return 1LL;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 2 )
  {
    v6 = (struct _UNIVERSAL_FONT_ID *)&v15;
    v7 = 0LL;
    v15 = *(_QWORD *)(*(_QWORD *)a2 + 84LL);
  }
  else
  {
    v5 = FHOBJ::pwszName(this, a2);
    cCapString(v16, v5, 32LL);
    v6 = 0LL;
    v7 = v16;
  }
  v8 = FHOBJ::pbktSearch(this, v7, &v14, v6, 0);
  if ( (unsigned int)FHOBJ::bAddPFELink(this, v8, v14, v16, a2, 0) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 48LL) & 0x8000000) != 0
      && *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 1 )
    {
      v10 = FHOBJ::pwszName(this, a2);
      while ( *v10++ )
        ;
      while ( *v10 )
      {
        cCapString(v16, v10, 32LL);
        v12 = FHOBJ::pbktSearch(this, v16, &v14, 0LL, 1);
        if ( !(unsigned int)FHOBJ::bAddPFELink(this, v12, v14, v16, a2, 1) )
          return 0LL;
        while ( *v10++ )
          ;
      }
    }
    return 1LL;
  }
  return 0LL;
}
