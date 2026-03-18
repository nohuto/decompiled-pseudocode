/*
 * XREFs of ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x1C001E000
 * Callers:
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C001DED4 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?pwszName@FHOBJ@@QEAAPEAGAEAVPFEOBJ@@@Z @ 0x1C001E964 (-pwszName@FHOBJ@@QEAAPEAGAEAVPFEOBJ@@@Z.c)
 *     ?vDeletePFELink@FHOBJ@@QEAAXPEAU_HASHBUCKET@@IAEAVPFEOBJ@@@Z @ 0x1C0065F04 (-vDeletePFELink@FHOBJ@@QEAAXPEAU_HASHBUCKET@@IAEAVPFEOBJ@@@Z.c)
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00663FC (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     cCapString @ 0x1C0066558 (cCapString.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

void __fastcall FHOBJ::vDelete(FHOBJ *this, struct PFEOBJ *a2)
{
  __int64 v4; // rax
  unsigned __int16 *v5; // rax
  struct _UNIVERSAL_FONT_ID *v6; // r9
  unsigned __int16 *v7; // rdx
  struct _HASHBUCKET *v8; // rax
  unsigned __int16 *v9; // rbx
  struct _HASHBUCKET *v11; // rax
  unsigned int v13; // [rsp+30h] [rbp-19h] BYREF
  __int64 v14; // [rsp+38h] [rbp-11h] BYREF
  unsigned __int16 v15[32]; // [rsp+40h] [rbp-9h] BYREF

  memset(v15, 0, sizeof(v15));
  v4 = *((_QWORD *)this + 1);
  v13 = 0;
  if ( *(_DWORD *)(v4 + 4)
    || _wcsicmp(
         (const wchar_t *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 16LL)),
         (const wchar_t *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 8LL))) )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 2 )
    {
      v6 = (struct _UNIVERSAL_FONT_ID *)&v14;
      v7 = 0LL;
      v14 = *(_QWORD *)(*(_QWORD *)a2 + 84LL);
    }
    else
    {
      v5 = FHOBJ::pwszName(this, a2);
      cCapString(v15, v5, 32LL);
      v6 = 0LL;
      v7 = v15;
    }
    v8 = FHOBJ::pbktSearch(this, v7, &v13, v6, 0);
    FHOBJ::vDeletePFELink(this, v8, v13, a2);
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 48LL) & 0x8000000) != 0
      && *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 1 )
    {
      v9 = FHOBJ::pwszName(this, a2);
      while ( *v9++ )
        ;
      while ( *v9 )
      {
        cCapString(v15, v9, 32LL);
        v11 = FHOBJ::pbktSearch(this, v15, &v13, 0LL, 1);
        FHOBJ::vDeletePFELink(this, v11, v13, a2);
        while ( *v9++ )
          ;
      }
    }
  }
}
