/*
 * XREFs of __GetUserObjectInformation@20 @ 0x8084C
 * Callers:
 *     _EditionGetUserObjectInformationEntryPoint@20 @ 0xF2822 (_EditionGetUserObjectInformationEntryPoint@20.c)
 * Callees:
 *     _CheckHandleFlag@16 @ 0x6F9E4 (_CheckHandleFlag@16.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __fastcall _GetUserObjectInformation(void *a1, int a2, ULONG *a3, unsigned int a4, int *a5)
{
  int v6; // edi
  int v7; // eax
  POBJECT_TYPE *ObjectType; // ebx
  ACCESS_MASK v9; // ecx
  int v10; // esi
  int v11; // esi
  const void **v12; // ebx
  size_t v13; // ecx
  ULONG v15; // ecx
  int v16; // esi
  int v17; // esi
  int v18; // esi
  PSID *v19; // esi
  size_t v20; // eax
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [esp+10h] [ebp-40h] BYREF
  PSID *v22; // [esp+20h] [ebp-30h]
  HANDLE Handle; // [esp+24h] [ebp-2Ch]
  PVOID Object; // [esp+28h] [ebp-28h] BYREF
  int v25; // [esp+2Ch] [ebp-24h]
  int v26; // [esp+30h] [ebp-20h]
  PVOID v27; // [esp+34h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+38h] [ebp-18h]

  Handle = a1;
  v6 = 1;
  v25 = 1;
  v26 = 0;
  HandleInformation.HandleAttributes = 0;
  HandleInformation.GrantedAccess = 0;
  Object = 0;
  v7 = ObReferenceObjectByHandle(a1, 0, 0, 1, &Object, 0);
  if ( v7 < 0 )
    goto LABEL_34;
  ObjectType = (POBJECT_TYPE *)ObGetObjectType(Object);
  ObfDereferenceObject(Object);
  if ( ObjectType == (POBJECT_TYPE *)ExWindowStationObjectType )
  {
    v9 = 2;
  }
  else
  {
    if ( ObjectType != ExDesktopObjectType )
    {
LABEL_25:
      v15 = 1;
LABEL_35:
      UserSetLastError(v15);
      return 0;
    }
    v9 = 1;
  }
  if ( (a2 == 6 || a2 == 5) && ObjectType != ExDesktopObjectType )
    goto LABEL_25;
  v27 = 0;
  v7 = ObReferenceObjectByHandle(Handle, v9, (POBJECT_TYPE)ObjectType, 1, &v27, &HandleInformation);
  if ( v7 < 0 )
  {
LABEL_34:
    v15 = RtlNtStatusToDosError(v7);
    goto LABEL_35;
  }
  ms_exc.registration.TryLevel = 0;
  v10 = a2 - 1;
  if ( !v10 )
  {
    v26 = 12;
    if ( a4 >= 0xC )
    {
      *a3 = (HandleInformation.HandleAttributes >> 1) & 1;
      a3[1] = 0;
      a3[2] = 0;
      if ( ObjectType == ExDesktopObjectType )
      {
        if ( CheckHandleFlag(0, *(_DWORD *)v27, (unsigned int)Handle, 0) )
          a3[2] |= 1u;
      }
      else if ( (*((_BYTE *)v27 + 32) & 4) == 0 )
      {
        a3[2] = 1;
      }
      goto LABEL_15;
    }
    goto LABEL_18;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    v16 = v11 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 != 1 )
          {
            UserSetLastError(87);
            goto LABEL_19;
          }
          v26 = 4;
          if ( a4 >= 4 )
          {
            *a3 = v27 == (PVOID)_grpdeskRitInput;
            goto LABEL_15;
          }
        }
        else
        {
          v26 = 4;
          if ( a4 >= 4 )
          {
            *a3 = *((_DWORD *)v27 + 17) >> 10;
            goto LABEL_15;
          }
        }
LABEL_18:
        UserSetLastError(122);
LABEL_19:
        v6 = 0;
        v25 = 0;
        goto LABEL_15;
      }
      if ( ObjectType == (POBJECT_TYPE *)ExWindowStationObjectType )
        v19 = (PSID *)v27;
      else
        v19 = (PSID *)*((_DWORD *)v27 + 5);
      v22 = v19;
      if ( v19[27] )
      {
        v20 = RtlLengthSid(v19[27]);
        v26 = v20;
        if ( v20 <= a4 )
        {
          memcpy(a3, v19[27], v20);
          goto LABEL_15;
        }
        goto LABEL_18;
      }
LABEL_45:
      v26 = 0;
      goto LABEL_15;
    }
    v12 = (const void **)(ObjectType + 2);
  }
  else if ( ObQueryNameInfo(v27) )
  {
    v12 = (const void **)(ObQueryNameInfo(v27) + 4);
  }
  else
  {
    v12 = 0;
  }
  Handle = v12;
  if ( !v12 )
    goto LABEL_45;
  v13 = *(unsigned __int16 *)v12;
  v26 = v13 + 2;
  if ( v13 + 2 > a4 )
    goto LABEL_18;
  memcpy(a3, v12[1], v13);
  *(_WORD *)((char *)a3 + *(unsigned __int16 *)v12) = 0;
LABEL_15:
  ms_exc.registration.TryLevel = -2;
  *a5 = v26;
  ObfDereferenceObject(v27);
  return v6;
}
