/*
 * XREFs of _GetUserObjectInformation @ 0x1C00690B0
 * Callers:
 *     EditionGetUserObjectInformationEntryPoint @ 0x1C00681A0 (EditionGetUserObjectInformationEntryPoint.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     CheckHandleFlag @ 0x1C00B3318 (CheckHandleFlag.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

__int64 __fastcall GetUserObjectInformation(HANDLE Handle, int a2, _DWORD *a3, unsigned int a4, int *a5)
{
  unsigned int v8; // ebx
  int v9; // esi
  int v10; // edi
  int v11; // eax
  POBJECT_TYPE *ObjectType; // r13
  ACCESS_MASK v13; // edx
  int v14; // r14d
  int v15; // r14d
  const void **v16; // r14
  size_t v17; // r8
  __int64 v18; // rcx
  int v19; // r14d
  int v20; // r14d
  int v21; // r14d
  const void **v22; // r14
  void *v23; // rcx
  ULONG v24; // eax
  __int64 v26; // rcx
  PVOID v27; // [rsp+38h] [rbp-70h] BYREF
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  const void **v29; // [rsp+50h] [rbp-58h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+58h] [rbp-50h] BYREF
  const void **v31; // [rsp+68h] [rbp-40h]

  v8 = 1;
  v9 = 0;
  v10 = 0;
  HandleInformation = 0LL;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL);
  if ( v11 < 0 )
    goto LABEL_45;
  ObjectType = (POBJECT_TYPE *)ObGetObjectType(Object);
  ObfDereferenceObject(Object);
  if ( ObjectType == (POBJECT_TYPE *)ExWindowStationObjectType )
  {
    v13 = 2;
    goto LABEL_5;
  }
  if ( ObjectType == ExDesktopObjectType )
  {
    v13 = 1;
LABEL_5:
    if ( (unsigned int)(a2 - 5) <= 1 && ObjectType != ExDesktopObjectType )
      goto LABEL_44;
    v27 = 0LL;
    v11 = ObReferenceObjectByHandle(Handle, v13, (POBJECT_TYPE)ObjectType, 1, &v27, &HandleInformation);
    if ( v11 >= 0 )
    {
      v14 = a2 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( !v15 )
        {
          if ( !ObQueryNameInfo(v27) )
          {
            v16 = 0LL;
            v29 = 0LL;
LABEL_12:
            if ( v16 )
            {
              v17 = *(unsigned __int16 *)v16;
              v10 = v17 + 2;
              if ( (int)v17 + 2 <= a4 )
              {
                memmove(a3, v16[1], v17);
                *(_WORD *)((char *)a3 + *(unsigned __int16 *)v16) = 0;
LABEL_41:
                *a5 = v10;
                ObfDereferenceObject(v27);
                return v8;
              }
              goto LABEL_15;
            }
LABEL_38:
            v10 = 0;
            goto LABEL_41;
          }
          v16 = (const void **)(ObQueryNameInfo(v27) + 8);
LABEL_11:
          v29 = v16;
          goto LABEL_12;
        }
        v19 = v15 - 1;
        if ( !v19 )
        {
          v16 = (const void **)(ObjectType + 2);
          goto LABEL_11;
        }
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            if ( v21 != 1 )
            {
              v18 = 87LL;
              goto LABEL_16;
            }
            v10 = 4;
            if ( a4 >= 4 )
            {
              LOBYTE(v9) = v27 == (PVOID)grpdeskRitInput;
              *a3 = v9;
              goto LABEL_41;
            }
          }
          else
          {
            v10 = 4;
            if ( a4 >= 4 )
            {
              *a3 = *((_DWORD *)v27 + 34) >> 10;
              goto LABEL_41;
            }
          }
        }
        else
        {
          if ( ObjectType == (POBJECT_TYPE *)ExWindowStationObjectType )
            v22 = (const void **)v27;
          else
            v22 = (const void **)*((_QWORD *)v27 + 5);
          v31 = v22;
          v23 = (void *)v22[24];
          if ( !v23 )
            goto LABEL_38;
          v24 = RtlLengthSid(v23);
          v10 = v24;
          if ( v24 <= a4 )
          {
            memmove(a3, v22[24], v24);
            goto LABEL_41;
          }
        }
      }
      else
      {
        v10 = 12;
        if ( a4 >= 0xC )
        {
          *a3 = (HandleInformation.HandleAttributes >> 1) & 1;
          *(_QWORD *)(a3 + 1) = 0LL;
          if ( ObjectType == ExDesktopObjectType )
          {
            if ( (unsigned int)CheckHandleFlag(0LL) )
              a3[2] |= 1u;
          }
          else if ( (*((_DWORD *)v27 + 16) & 4) == 0 )
          {
            a3[2] = 1;
          }
          goto LABEL_41;
        }
      }
LABEL_15:
      v18 = 122LL;
LABEL_16:
      UserSetLastError(v18);
      v8 = 0;
      goto LABEL_41;
    }
LABEL_45:
    v26 = RtlNtStatusToDosError(v11);
    goto LABEL_46;
  }
LABEL_44:
  v26 = 1LL;
LABEL_46:
  UserSetLastError(v26);
  return 0LL;
}
