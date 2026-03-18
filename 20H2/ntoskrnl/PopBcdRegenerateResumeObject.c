/*
 * XREFs of PopBcdRegenerateResumeObject @ 0x1408F80A4
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x14077E4A0 (PopBcdEstablishResumeObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14077F114 (PopBcdSetDefaultResumeObjectElements.c)
 *     BcdQueryObject @ 0x14077F524 (BcdQueryObject.c)
 *     PopBcdReadElement @ 0x14077F68C (PopBcdReadElement.c)
 *     BcdCloseObject @ 0x14077FDEC (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x1407801FC (BcdSetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x140971500 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x140971598 (BcdDeleteObject.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBcdRegenerateResumeObject(__int64 a1, void *a2, _QWORD *a3)
{
  PVOID v3; // rsi
  int Object; // ebx
  void *v7; // rdi
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  unsigned int v14; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v15[3]; // [rsp+34h] [rbp-4Ch] BYREF
  void *v16; // [rsp+40h] [rbp-40h] BYREF
  PVOID v17; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v18[2]; // [rsp+50h] [rbp-30h] BYREF
  GUID v19; // [rsp+58h] [rbp-28h] BYREF
  __int128 v20; // [rsp+68h] [rbp-18h] BYREF

  v14 = 0;
  v3 = 0LL;
  memset(v15, 0, sizeof(v15));
  v16 = 0LL;
  v17 = 0LL;
  v18[0] = 1;
  v18[1] = 270532612;
  v20 = 0LL;
  v19 = 0LL;
  Object = BcdCreateObject(a1, 0LL, v18, &v16);
  if ( Object < 0 )
  {
    v7 = v16;
  }
  else
  {
    Object = PopBcdReadElement((int)a2, 301989892, &v15[1], &v14);
    if ( Object < 0 )
    {
      v7 = v16;
    }
    else
    {
      PopBcdReadElement((int)a2, 301989893, &v17, v15);
      v7 = v16;
      v9 = BcdSetElementDataWithFlags(v16, 0x12000004u, v8, *(__int64 *)&v15[1], v14);
      v3 = v17;
      Object = v9;
      if ( v9 >= 0 )
      {
        if ( !v17 || (Object = BcdSetElementDataWithFlags(v7, 0x12000005u, v10, (__int64)v17, v15[0]), Object >= 0) )
        {
          Object = PopBcdSetDefaultResumeObjectElements((__int64)v7, (__int64)a2);
          if ( Object >= 0 )
          {
            v19 = GUID_RESUME_LOADER_SETTINGS_GROUP;
            Object = BcdSetElementDataWithFlags(v7, 0x14000006u, v11, (__int64)&v19, 0x10u);
            if ( Object >= 0 )
            {
              Object = BcdQueryObject((__int64)v7, 0, 0LL, (__int64)&v20);
              if ( Object >= 0 )
              {
                Object = BcdSetElementDataWithFlags(a2, 0x23000003u, v12, (__int64)&v20, 0x10u);
                if ( Object >= 0 )
                {
                  *a3 = v7;
                  v7 = 0LL;
                }
              }
            }
          }
        }
      }
    }
    if ( *(_QWORD *)&v15[1] )
      ExFreePoolWithTag(*(PVOID *)&v15[1], 0);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
  }
  if ( v7 )
  {
    if ( Object < 0 )
      BcdDeleteObject(v7);
    else
      BcdCloseObject((__int64)v7);
  }
  return (unsigned int)Object;
}
