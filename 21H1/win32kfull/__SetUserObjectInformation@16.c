/*
 * XREFs of __SetUserObjectInformation@16 @ 0x14386C
 * Callers:
 *     _NtUserSetObjectInformation@16 @ 0x169A74 (_NtUserSetObjectInformation@16.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall _SetUserObjectInformation(void *a1, int a2, _DWORD *a3, unsigned int a4)
{
  int v5; // esi
  int v6; // eax
  ULONG v7; // ecx
  POBJECT_TYPE *ObjectType; // edi
  ACCESS_MASK v9; // eax
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [esp+10h] [ebp-40h] BYREF
  PVOID v12; // [esp+20h] [ebp-30h] BYREF
  void *v13; // [esp+24h] [ebp-2Ch]
  int v14; // [esp+28h] [ebp-28h]
  PVOID Object; // [esp+2Ch] [ebp-24h] BYREF
  int v16; // [esp+30h] [ebp-20h]
  __int16 v17; // [esp+34h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+38h] [ebp-18h]

  v14 = a2;
  v13 = a1;
  v5 = 1;
  v16 = 1;
  HandleInformation.HandleAttributes = 0;
  HandleInformation.GrantedAccess = 0;
  v17 = 0;
  Object = 0;
  v6 = ObReferenceObjectByHandle(a1, 0, 0, 1, &Object, 0);
  if ( v6 >= 0 )
  {
    ObjectType = (POBJECT_TYPE *)ObGetObjectType(Object);
    ObfDereferenceObject(Object);
    if ( ObjectType == (POBJECT_TYPE *)ExWindowStationObjectType )
    {
      v9 = 16;
    }
    else
    {
      if ( ObjectType != ExDesktopObjectType )
      {
        v7 = 1;
        goto LABEL_18;
      }
      v9 = 128;
    }
    v12 = 0;
    v6 = ObReferenceObjectByHandle(a1, v9, (POBJECT_TYPE)ObjectType, 1, &v12, &HandleInformation);
    if ( v6 >= 0 )
    {
      ms_exc.registration.TryLevel = 0;
      if ( --v14 )
      {
        UserSetLastError((struct _NT_TIB *)0x57);
      }
      else
      {
        if ( a4 >= 0xC )
        {
          LOBYTE(v17) = *a3 != 0;
          HIBYTE(v17) = HandleInformation.HandleAttributes & 1;
          ObSetHandleAttributes(v13, &v17, 1);
          if ( ObjectType == ExDesktopObjectType )
          {
            v5 = SetHandleFlag(v13, 0, a3[2] & 1);
            v16 = v5;
            if ( !v5 )
              UserSetLastError((struct _NT_TIB *)8);
          }
          goto LABEL_16;
        }
        UserSetLastError((struct _NT_TIB *)0xD);
      }
      v5 = 0;
      v16 = 0;
LABEL_16:
      ms_exc.registration.TryLevel = -2;
      ObfDereferenceObject(v12);
      return v5;
    }
  }
  v7 = RtlNtStatusToDosError(v6);
LABEL_18:
  UserSetLastError((struct _NT_TIB *)v7);
  return 0;
}
