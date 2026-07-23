/*
 * XREFs of NtCreateTokenEx @ 0x140672E90
 * Callers:
 *     NtCreateToken @ 0x14091E010 (NtCreateToken.c)
 * Callees:
 *     SepCreateTokenEx @ 0x1402D874C (SepCreateTokenEx.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSid @ 0x1406465B0 (SeCaptureSid.c)
 *     SeReleaseSid @ 0x1406466B4 (SeReleaseSid.c)
 *     SeCaptureSecurityQos @ 0x140649B64 (SeCaptureSecurityQos.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140651528 (SepCaptureTokenSecurityAttributesInformation.c)
 *     SeCaptureLuidAndAttributesArray @ 0x1406705FC (SeCaptureLuidAndAttributesArray.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1406706E0 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140673AA0 (SeCaptureSidAndAttributesArray.c)
 *     SeReleaseAcl @ 0x140675370 (SeReleaseAcl.c)
 *     SeCaptureAcl @ 0x14067538C (SeCaptureAcl.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x1406F7C44 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtCreateTokenEx(
        PHANDLE TokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TOKEN_TYPE Type,
        PLUID AuthenticationId,
        PLARGE_INTEGER ExpirationTime,
        PTOKEN_USER User,
        PTOKEN_GROUPS Groups,
        PTOKEN_PRIVILEGES Privileges,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION UserAttributes,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION DeviceAttributes,
        PTOKEN_GROUPS DeviceGroups,
        PTOKEN_MANDATORY_POLICY MandatoryPolicy,
        PTOKEN_OWNER Owner,
        PTOKEN_PRIMARY_GROUP PrimaryGroup,
        PTOKEN_DEFAULT_DACL DefaultDacl,
        PTOKEN_SOURCE Source)
{
  PTOKEN_SECURITY_ATTRIBUTES_INFORMATION v17; // rbx
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // edi
  NTSTATUS result; // eax
  __int64 v23; // rdx
  NTSTATUS v24; // edi
  __int64 v25; // r8
  __int64 v26; // r9
  ULONG v27; // ebx
  POOL_TYPE PoolType; // [rsp+20h] [rbp-1F8h]
  int v29; // [rsp+28h] [rbp-1F0h]
  int v30; // [rsp+28h] [rbp-1F0h]
  int v31; // [rsp+30h] [rbp-1E8h]
  int v32; // [rsp+30h] [rbp-1E8h]
  char v33; // [rsp+C0h] [rbp-158h] BYREF
  char v34; // [rsp+C1h] [rbp-157h]
  KPROCESSOR_MODE v35; // [rsp+C2h] [rbp-156h]
  NTSTATUS v36; // [rsp+C4h] [rbp-154h]
  __int64 v37; // [rsp+C8h] [rbp-150h] BYREF
  unsigned int Policy; // [rsp+D0h] [rbp-148h] BYREF
  int GroupCount; // [rsp+D4h] [rbp-144h]
  int PrivilegeCount; // [rsp+D8h] [rbp-140h]
  ULONG Count; // [rsp+DCh] [rbp-13Ch]
  int v42; // [rsp+E0h] [rbp-138h]
  __int64 v43; // [rsp+E8h] [rbp-130h] BYREF
  __int64 v44; // [rsp+F0h] [rbp-128h] BYREF
  __int64 v45; // [rsp+F8h] [rbp-120h] BYREF
  PVOID P; // [rsp+100h] [rbp-118h] BYREF
  PVOID v47; // [rsp+108h] [rbp-110h] BYREF
  __int64 v48; // [rsp+110h] [rbp-108h] BYREF
  __int64 v49; // [rsp+118h] [rbp-100h] BYREF
  __int64 v50; // [rsp+120h] [rbp-F8h] BYREF
  __int64 v51; // [rsp+128h] [rbp-F0h] BYREF
  __int64 v52; // [rsp+130h] [rbp-E8h] BYREF
  __int64 v53; // [rsp+138h] [rbp-E0h] BYREF
  ACCESS_MASK v54; // [rsp+140h] [rbp-D8h]
  __int64 *v55; // [rsp+148h] [rbp-D0h]
  PLARGE_INTEGER v56; // [rsp+150h] [rbp-C8h]
  PTOKEN_GROUPS v57; // [rsp+158h] [rbp-C0h]
  PTOKEN_PRIVILEGES v58; // [rsp+160h] [rbp-B8h]
  char **v59; // [rsp+168h] [rbp-B0h]
  PTOKEN_SOURCE v60; // [rsp+170h] [rbp-A8h]
  __int64 QuadPart; // [rsp+178h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+180h] [rbp-98h] BYREF
  int v63[2]; // [rsp+188h] [rbp-90h]
  int v64[2]; // [rsp+190h] [rbp-88h] BYREF
  PHANDLE v65; // [rsp+198h] [rbp-80h]
  __int64 v66; // [rsp+1A0h] [rbp-78h] BYREF
  int v67; // [rsp+1A8h] [rbp-70h]
  void *Src; // [rsp+1B0h] [rbp-68h]
  PTOKEN_SECURITY_ATTRIBUTES_INFORMATION v69; // [rsp+1B8h] [rbp-60h]
  PTOKEN_MANDATORY_POLICY v70; // [rsp+1C0h] [rbp-58h]
  __int64 v71[2]; // [rsp+1C8h] [rbp-50h] BYREF

  v42 = Type;
  *(_QWORD *)v63 = ObjectAttributes;
  v54 = DesiredAccess;
  v65 = TokenHandle;
  v55 = (__int64 *)AuthenticationId;
  v56 = ExpirationTime;
  Src = User;
  v57 = Groups;
  v58 = Privileges;
  v17 = DeviceAttributes;
  v69 = DeviceAttributes;
  v70 = MandatoryPolicy;
  v59 = (char **)PrimaryGroup;
  v60 = Source;
  v53 = 0LL;
  *(_QWORD *)v64 = 0LL;
  v33 = 0;
  v66 = 0LL;
  v67 = 0;
  v62 = 0LL;
  QuadPart = 0LL;
  v48 = 0LL;
  v52 = 0LL;
  Count = 0;
  v49 = 0LL;
  v37 = 0x100000000LL;
  PrivilegeCount = 0;
  v50 = 0LL;
  v51 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  *(_OWORD *)v71 = 0LL;
  Policy = 0;
  v34 = 0;
  P = 0LL;
  v47 = 0LL;
  GroupCount = 0;
  v45 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v35 = PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
    return -1073741727;
  if ( PreviousMode )
  {
    v20 = (__int64)v65;
    v19 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v65 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v20 = *(_QWORD *)v20;
    if ( ((unsigned __int8)v56 & 3) != 0
      || ((unsigned __int8)v57 & 3) != 0
      || ((unsigned __int8)v58 & 3) != 0
      || ((unsigned __int8)v60 & 3) != 0
      || Owner && ((unsigned __int8)Owner & 3) != 0
      || ((unsigned __int8)v59 & 3) != 0
      || DefaultDacl && ((unsigned __int8)DefaultDacl & 3) != 0
      || ((unsigned __int8)v55 & 3) != 0
      || MandatoryPolicy && ((unsigned __int8)MandatoryPolicy & 3) != 0
      || DeviceGroups && ((unsigned __int8)DeviceGroups & 3) != 0
      || DeviceAttributes && ((unsigned __int8)DeviceAttributes & 3) != 0
      || UserAttributes && ((unsigned __int8)UserAttributes & 3) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
  }
  v21 = v42;
  if ( (unsigned int)(v42 - 1) > 1 )
    return -1073741656;
  LOBYTE(v19) = PreviousMode;
  result = SeCaptureSecurityQos(*(__int64 *)v63, v19, &v33, (__int64)&v66);
  if ( result >= 0 )
  {
    if ( v33 || v21 != 2 )
    {
      v36 = 0;
      v62 = *v55;
      QuadPart = v56->QuadPart;
      v24 = SeCaptureSidAndAttributesArray(Src, 0, v29, v31, (__int64)&v48, (__int64)&v52);
      v36 = v24;
      if ( v24 >= 0 )
      {
        Count = v57->GroupCount;
        v27 = Count;
        v24 = SeCaptureSidAndAttributesArray(v57->Groups, 0, v30, v32, (__int64)&v49, (__int64)&v37);
        v36 = v24;
        LODWORD(v37) = (-16 * v27 + v37 + 3) & 0xFFFFFFFC;
        v17 = v69;
      }
      if ( v24 >= 0 )
      {
        PrivilegeCount = v58->PrivilegeCount;
        v24 = SeCaptureLuidAndAttributesArray(
                (char *)v58->Privileges,
                PrivilegeCount,
                PreviousMode,
                v26,
                PoolType,
                v30,
                v32,
                &v50,
                (_DWORD *)&v52 + 1);
        v36 = v24;
      }
      if ( Owner && v24 >= 0 )
      {
        v24 = SeCaptureSid((char *)Owner->Owner, PreviousMode, v25, v26, PoolType, 1, (PSID *)&v51);
        v36 = v24;
      }
      if ( v24 >= 0 )
      {
        v24 = SeCaptureSid(*v59, PreviousMode, v25, v26, PoolType, 1, (PSID *)&v43);
        v36 = v24;
      }
      if ( DefaultDacl && v24 >= 0 && DefaultDacl->DefaultDacl )
      {
        v24 = SeCaptureAcl(DefaultDacl->DefaultDacl, NonPagedPoolNx, v30, (__int64)&v44, (__int64)&v53);
        v36 = v24;
      }
      *(struct _TOKEN_SOURCE *)v71 = *v60;
      if ( DeviceGroups && v24 >= 0 )
      {
        GroupCount = DeviceGroups->GroupCount;
        v24 = SeCaptureSidAndAttributesArray(DeviceGroups->Groups, 0, v30, v32, (__int64)&v45, (__int64)&v53 + 4);
        v36 = v24;
      }
      if ( UserAttributes && v24 >= 0 )
      {
        v24 = SepCaptureTokenSecurityAttributesInformation(
                (unsigned __int64)UserAttributes,
                (_DWORD *)&v37 + 1,
                1,
                PreviousMode,
                0,
                &P);
        v36 = v24;
      }
      if ( v17 && v24 >= 0 )
      {
        v24 = SepCaptureTokenSecurityAttributesInformation(
                (unsigned __int64)v17,
                (_DWORD *)&v37 + 1,
                1,
                PreviousMode,
                0,
                &v47);
        v36 = v24;
      }
      if ( v70 && v24 >= 0 )
      {
        Policy = v70->Policy;
        v34 = 1;
      }
      if ( v24 >= 0 )
        v24 = SepCreateTokenEx(
                (HANDLE *)v64,
                PreviousMode,
                v54,
                *(__int64 *)v63,
                v42,
                SHIDWORD(v66),
                (__int64)&v62,
                &QuadPart,
                (_SID_AND_ATTRIBUTES *)v48,
                Count,
                (_SID_AND_ATTRIBUTES *)v49,
                v37,
                PrivilegeCount,
                (char **)v50,
                (void *)v51,
                (void *)v43,
                (void *)v44,
                v71,
                (__int64)P,
                (__int64)v47,
                GroupCount,
                v45,
                (_DWORD *)((unsigned __int64)&Policy & -(__int64)(v34 != 0)),
                0);
      if ( v48 )
        SeReleaseLuidAndAttributesArray((void *)v48, PreviousMode);
      if ( v49 )
        SeReleaseLuidAndAttributesArray((void *)v49, PreviousMode);
      if ( v50 )
        SeReleaseLuidAndAttributesArray((void *)v50, PreviousMode);
      if ( v51 )
        SeReleaseSid((void *)v51, PreviousMode, 1);
      if ( v43 )
        SeReleaseSid((void *)v43, PreviousMode, 1);
      if ( v44 )
      {
        LOBYTE(v23) = PreviousMode;
        SeReleaseAcl(v44, v23);
      }
      if ( v45 )
        SeReleaseLuidAndAttributesArray((void *)v45, PreviousMode);
      if ( P )
        SepFreeCapturedTokenSecurityAttributesInformation(P);
      if ( v47 )
        SepFreeCapturedTokenSecurityAttributesInformation(v47);
      if ( v24 >= 0 )
        *v65 = *(HANDLE *)v64;
      return v24;
    }
    else
    {
      return -1073741659;
    }
  }
  return result;
}
