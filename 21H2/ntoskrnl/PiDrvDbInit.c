/*
 * XREFs of PiDrvDbInit @ 0x1407A370C
 * Callers:
 *     PiPnpRtlInit @ 0x1407A3550 (PiPnpRtlInit.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x1402486E8 (CmIsStateSeparationEnabled.c)
 *     PiDrvDbSetupNodes @ 0x1407A37EC (PiDrvDbSetupNodes.c)
 *     PiDrvDbSuspendNodes @ 0x1407A397C (PiDrvDbSuspendNodes.c)
 *     PiDrvDbRegisterNode @ 0x1407A3A78 (PiDrvDbRegisterNode.c)
 *     DrvDbOpenContext @ 0x1407A420C (DrvDbOpenContext.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x1407A45FC (PiDrvDbEnumDriverStoreNodes.c)
 */

__int64 __fastcall PiDrvDbInit(__int64 a1)
{
  int v1; // edx
  int v3; // edi
  wchar_t **i; // rbx
  __int64 v5; // rcx
  int v6; // eax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v8 = 0;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 2 )
    {
      v1 = PiDrvDbSetupNodes(a1, 0LL);
      if ( v1 >= 0 )
        return (unsigned int)PiDrvDbSuspendNodes(0LL);
    }
  }
  else
  {
    qword_140C43108 = (__int64)&PiDrvDbNodeList;
    PiDrvDbNodeList = (__int64)&PiDrvDbNodeList;
    v1 = DrvDbOpenContext();
    if ( v1 >= 0 )
    {
      v3 = 0;
      for ( i = &PiDrvDbNodeDescriptors; ; i += 2 )
      {
        if ( ((_DWORD)i[1] & 4) == 0 || !CmIsStateSeparationEnabled() )
        {
          v1 = PiDrvDbRegisterNode(*i);
          if ( v1 < 0 )
            break;
        }
        if ( (unsigned int)++v3 >= 2 )
        {
          if ( v1 >= 0 )
          {
            v1 = PiDrvDbEnumDriverStoreNodes(PiDrvDbRegisterNodeCallback, &v8);
            if ( v1 >= 0 )
            {
              v1 = v8;
              if ( v8 >= 0 )
              {
                LOBYTE(v5) = 1;
                v6 = PiDrvDbSuspendNodes(v5);
                v1 = v6;
                if ( v6 >= 0 )
                  return (unsigned int)PiDrvDbSetupNodes(0LL, (unsigned int)v6);
              }
            }
          }
          return (unsigned int)v1;
        }
      }
    }
  }
  return (unsigned int)v1;
}
