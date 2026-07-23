/*
 * XREFs of SPCall2ServerInternal @ 0x1405D6678
 * Callers:
 *     Callout @ 0x1405D6640 (Callout.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     SeAccessCheck @ 0x140207F80 (SeAccessCheck.c)
 *     RtlULongLongAdd @ 0x140242A00 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x140242A20 (RtlUIntAdd.c)
 *     RtlLengthSid @ 0x14025B480 (RtlLengthSid.c)
 *     StringCbLengthW @ 0x1402C2B50 (StringCbLengthW.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memcmp @ 0x1403CE5A0 (memcmp.c)
 *     ZwQuerySystemInformation @ 0x1403F29F0 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     sub_1405BA040 @ 0x1405BA040 (sub_1405BA040.c)
 *     sub_1405BA61C @ 0x1405BA61C (sub_1405BA61C.c)
 *     SPCallServerHandleAuthenticateCaller @ 0x1405D43C8 (SPCallServerHandleAuthenticateCaller.c)
 *     SPCallServerHandleUpdatePolicies @ 0x1405D44B8 (SPCallServerHandleUpdatePolicies.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x1405D4670 (SPCallServerHandleGetAppPolicyValue.c)
 *     SPCallServerHandleIsAppLicensed @ 0x1405D4D94 (SPCallServerHandleIsAppLicensed.c)
 *     SPCallServerHandleClepKdf @ 0x1405D52F8 (SPCallServerHandleClepKdf.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D8350 (RtlCreateSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     SPCallServerHandleQueryPolicy @ 0x1405F66A0 (SPCallServerHandleQueryPolicy.c)
 *     RtlpAddKnownAce @ 0x1406064C0 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140615660 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140615800 (RtlCreateAcl.c)
 *     sub_1406B7D50 @ 0x1406B7D50 (sub_1406B7D50.c)
 *     sub_1406B7FB0 @ 0x1406B7FB0 (sub_1406B7FB0.c)
 *     sub_1406B8070 @ 0x1406B8070 (sub_1406B8070.c)
 *     sub_1406B8140 @ 0x1406B8140 (sub_1406B8140.c)
 *     sub_1406B81C0 @ 0x1406B81C0 (sub_1406B81C0.c)
 *     sub_1406B8CD0 @ 0x1406B8CD0 (sub_1406B8CD0.c)
 *     sub_1406B8D40 @ 0x1406B8D40 (sub_1406B8D40.c)
 *     sub_1406B8E90 @ 0x1406B8E90 (sub_1406B8E90.c)
 *     sub_1406B9130 @ 0x1406B9130 (sub_1406B9130.c)
 *     sub_1406B91A0 @ 0x1406B91A0 (sub_1406B91A0.c)
 *     sub_1406BA260 @ 0x1406BA260 (sub_1406BA260.c)
 *     sub_1406BA310 @ 0x1406BA310 (sub_1406BA310.c)
 *     sub_1406BABC0 @ 0x1406BABC0 (sub_1406BABC0.c)
 *     sub_1406BB3C0 @ 0x1406BB3C0 (sub_1406BB3C0.c)
 *     sub_1406BB3F0 @ 0x1406BB3F0 (sub_1406BB3F0.c)
 *     sub_1406BB420 @ 0x1406BB420 (sub_1406BB420.c)
 *     sub_1406BB4D0 @ 0x1406BB4D0 (sub_1406BB4D0.c)
 *     sub_1406BB7B0 @ 0x1406BB7B0 (sub_1406BB7B0.c)
 *     sub_1406BC7E0 @ 0x1406BC7E0 (sub_1406BC7E0.c)
 *     sub_1406BDD70 @ 0x1406BDD70 (sub_1406BDD70.c)
 *     sub_1406BF630 @ 0x1406BF630 (sub_1406BF630.c)
 *     sub_1406C1A00 @ 0x1406C1A00 (sub_1406C1A00.c)
 *     sub_1406C1C80 @ 0x1406C1C80 (sub_1406C1C80.c)
 *     sub_1406C2600 @ 0x1406C2600 (sub_1406C2600.c)
 *     sub_1406C2E70 @ 0x1406C2E70 (sub_1406C2E70.c)
 *     sub_1406C8EC0 @ 0x1406C8EC0 (sub_1406C8EC0.c)
 *     sub_1406C9070 @ 0x1406C9070 (sub_1406C9070.c)
 *     sub_1406CA730 @ 0x1406CA730 (sub_1406CA730.c)
 *     sub_1406E4B90 @ 0x1406E4B90 (sub_1406E4B90.c)
 *     SPCallServerHandleFileIntegrityUpdate @ 0x140713C24 (SPCallServerHandleFileIntegrityUpdate.c)
 *     SPCallServerHandleFileIntegrityQuery @ 0x140714244 (SPCallServerHandleFileIntegrityQuery.c)
 *     SPCallServerHandleFileUsnQuery @ 0x14071476C (SPCallServerHandleFileUsnQuery.c)
 *     SPCallServerHandleCheckLicense @ 0x140716D0C (SPCallServerHandleCheckLicense.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x14077858C (SPCallServerHandleWaitForDisplayWindow.c)
 *     sub_14095A694 @ 0x14095A694 (sub_14095A694.c)
 *     sub_14095AA90 @ 0x14095AA90 (sub_14095AA90.c)
 *     sub_14095AF04 @ 0x14095AF04 (sub_14095AF04.c)
 *     sub_14095B2AC @ 0x14095B2AC (sub_14095B2AC.c)
 *     sub_14095B50C @ 0x14095B50C (sub_14095B50C.c)
 *     sub_14095B8B0 @ 0x14095B8B0 (sub_14095B8B0.c)
 *     sub_14095BEE0 @ 0x14095BEE0 (sub_14095BEE0.c)
 *     sub_14095C574 @ 0x14095C574 (sub_14095C574.c)
 *     sub_14095C970 @ 0x14095C970 (sub_14095C970.c)
 *     sub_14095D1D8 @ 0x14095D1D8 (sub_14095D1D8.c)
 *     sub_14095D64C @ 0x14095D64C (sub_14095D64C.c)
 *     sub_14095D8EC @ 0x14095D8EC (sub_14095D8EC.c)
 *     sub_14095DF00 @ 0x14095DF00 (sub_14095DF00.c)
 *     sub_14095E368 @ 0x14095E368 (sub_14095E368.c)
 *     sub_14095E5CC @ 0x14095E5CC (sub_14095E5CC.c)
 *     sub_14095E704 @ 0x14095E704 (sub_14095E704.c)
 *     sub_14095E968 @ 0x14095E968 (sub_14095E968.c)
 *     sub_14095EE20 @ 0x14095EE20 (sub_14095EE20.c)
 *     sub_14095F080 @ 0x14095F080 (sub_14095F080.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCall2ServerInternal(unsigned int *a1, unsigned int a2, unsigned int a3, _QWORD *a4, __int64 a5)
{
  _QWORD *v6; // rbx
  const void **v7; // r15
  unsigned int *v8; // r14
  SIZE_T v9; // r12
  unsigned int *v10; // rcx
  unsigned int *v11; // r9
  SIZE_T v12; // rdi
  unsigned int *v13; // rcx
  unsigned int v14; // r9d
  unsigned __int64 v15; // r8
  unsigned int v16; // r10d
  unsigned int v17; // ecx
  unsigned int v18; // r8d
  unsigned int *PoolWithTag; // rax
  unsigned int *v20; // rbx
  int Acl; // esi
  _QWORD *v22; // rbx
  UINT *v23; // rcx
  size_t v24; // rdx
  void *v25; // rdi
  __int64 *v26; // rbx
  unsigned int v27; // r8d
  unsigned int v28; // r9d
  __int64 v29; // rbx
  ACL *v30; // rax
  unsigned __int8 *v31; // r8
  PACL v32; // rcx
  UINT v33; // r12d
  unsigned __int8 *v34; // rsi
  UINT v35; // r15d
  int v36; // edi
  UINT v37; // r14d
  unsigned __int8 *v38; // r11
  int v39; // edx
  int v40; // r8d
  int v41; // eax
  int v42; // r12d
  int v43; // edx
  unsigned int v44; // r15d
  int v45; // r12d
  int v46; // r15d
  int v47; // r12d
  int v48; // r15d
  int v49; // r12d
  int v50; // r15d
  __int64 v51; // r13
  int v52; // r12d
  __int64 v53; // rdx
  int v54; // r15d
  unsigned int v55; // r12d
  unsigned __int8 *v56; // rbx
  unsigned int v57; // r15d
  unsigned __int8 *v58; // rax
  int v59; // r12d
  __int64 v60; // rcx
  __int64 v61; // rcx
  _BYTE *v62; // r11
  int v63; // r12d
  int v64; // r15d
  int v65; // r12d
  int v66; // r15d
  int v67; // r12d
  int v68; // r15d
  int v69; // r12d
  int v70; // r15d
  bool v71; // zf
  int v72; // eax
  int v73; // eax
  ULONGLONG v74; // rax
  UINT *i; // r8
  unsigned int v76; // edi
  signed int v77; // ebx
  UINT *v78; // r12
  UINT v79; // r11d
  SIZE_T v80; // rsi
  char *v81; // rbx
  unsigned __int64 v82; // rdx
  size_t v83; // r9
  void *v84; // rax
  int v85; // r8d
  char *v86; // rcx
  unsigned int v87; // eax
  char *v88; // r10
  int v89; // edx
  unsigned int *v90; // rax
  UINT *v91; // rax
  int v92; // edx
  __int64 v93; // r8
  unsigned int *v94; // rcx
  UINT v95; // ecx
  unsigned int *v96; // rdx
  unsigned int *v97; // rax
  unsigned int *v98; // rax
  unsigned int j; // edx
  __int64 v100; // r8
  unsigned int *v101; // rcx
  unsigned int v102; // ecx
  ACL *v103; // r8
  ACL *v104; // rax
  unsigned int *v105; // rax
  __int64 v106; // rdx
  __int64 v107; // r8
  unsigned int *v108; // rbx
  void *v109; // rcx
  UINT v110; // eax
  PVOID v111; // rax
  size_t v112; // rax
  PVOID v113; // rax
  int Policy; // eax
  bool v115; // sf
  UINT v116; // eax
  char *v117; // rax
  char *v118; // rbx
  unsigned int v119; // r9d
  void *v120; // rcx
  void *v121; // rcx
  unsigned int v122; // esi
  __int64 *v123; // rdi
  unsigned int v124; // ecx
  unsigned int v125; // edx
  __int64 v126; // rdi
  unsigned __int8 v127; // bl
  unsigned __int64 k; // rcx
  PVOID v129; // rax
  unsigned __int8 *v130; // rdx
  ULONGLONG v131; // rcx
  int v132; // edi
  int v133; // r8d
  size_t v134; // rax
  unsigned __int8 *v135; // r15
  unsigned __int8 *v136; // r9
  ULONGLONG v137; // r10
  ULONGLONG v138; // rdx
  __int64 v139; // r14
  unsigned __int8 *v140; // rdi
  int v141; // r12d
  int v142; // ecx
  int v143; // eax
  int v144; // r12d
  int v145; // esi
  unsigned __int8 *v146; // rax
  int v147; // r13d
  __int64 v148; // rcx
  __int64 v149; // rcx
  unsigned int v150; // esi
  int v151; // r13d
  int v152; // esi
  int v153; // r13d
  int v154; // esi
  int v155; // esi
  unsigned int v156; // r8d
  int v157; // esi
  int v158; // r8d
  _BYTE *v159; // r9
  UINT v160; // eax
  int v161; // esi
  int v162; // r8d
  UINT v163; // esi
  UINT v164; // r8d
  int v165; // esi
  int v166; // r8d
  int v167; // esi
  int v168; // r8d
  int v169; // esi
  int v170; // r8d
  void *v171; // r12
  __int64 v172; // rdi
  PVOID v173; // rax
  PVOID v174; // rbx
  UINT v175; // edx
  UINT v176; // r9d
  _DWORD *v177; // rax
  void *v178; // rbx
  ULONGLONG v179; // rcx
  ULONGLONG v180; // rcx
  _DWORD *v181; // rcx
  void *v182; // rcx
  void *v183; // rcx
  void *v184; // rcx
  void *v185; // rcx
  void *v186; // rcx
  void *v187; // rcx
  int v189; // eax
  int v190; // eax
  void *v191; // rax
  PVOID v192; // rax
  const void *v193; // r12
  PACL v194; // rdi
  void *v195; // rcx
  void *v196; // rcx
  void *v197; // rcx
  unsigned int v198; // eax
  unsigned int v199; // r12d
  PVOID v200; // rax
  PVOID v201; // rax
  int IsAppLicensed; // eax
  __int64 v203; // rsi
  ULONG v204; // ebx
  ULONG v205; // ebx
  ULONG v206; // ebx
  ACL *v207; // rax
  __int64 v208; // rdx
  __int64 v209; // r8
  BOOLEAN v210; // bl
  const void *v211; // rbx
  const void *v212; // rbx
  int updated; // eax
  int v214; // eax
  __int64 v215; // rsi
  ULONG v216; // ebx
  ULONG v217; // ebx
  ULONG v218; // ebx
  ACL *v219; // rax
  BOOLEAN v220; // bl
  const void *v221; // rbx
  int v222; // eax
  void *v223; // rcx
  void *v224; // rcx
  void *v225; // rcx
  int v226; // r12d
  int v227; // ebx
  UINT v228; // r11d
  int v229; // r10d
  char v230; // r9
  int v231; // edx
  __int64 v232; // r14
  unsigned __int8 *v233; // r15
  unsigned __int8 *v234; // rax
  ULONGLONG v235; // rdx
  __int64 v236; // rcx
  int v237; // eax
  __int64 v238; // rcx
  int v239; // eax
  UINT v240; // ebx
  int v241; // r8d
  unsigned int v242; // edx
  UINT v243; // eax
  UINT v244; // ecx
  PACL v245; // r9
  ACL *p_Sbz1; // r11
  UCHAR v247; // r10
  void *v248; // rcx
  void *v249; // rcx
  void *v250; // rcx
  unsigned int v251; // ebx
  _DWORD *v252; // rcx
  int *v253; // r10
  int v254; // r11d
  NTSTATUS v255; // eax
  UINT v256; // r9d
  UINT v257; // ecx
  UINT v258; // edx
  UINT v259; // r9d
  UINT v260; // r11d
  UINT v261; // eax
  UINT v262; // ecx
  UINT v263; // r10d
  PVOID v264; // rax
  _DWORD *v265; // r9
  _DWORD *v266; // rax
  int v267; // ecx
  UINT v268; // ebx
  NTSTATUS v269; // eax
  UINT v270; // edx
  UINT v271; // r9d
  UINT v272; // r10d
  UINT v273; // eax
  UINT v274; // r10d
  UINT v275; // r10d
  UINT v276; // eax
  PVOID v277; // rax
  _DWORD *v278; // r9
  int v279; // r10d
  UINT v280; // ebx
  size_t v281; // r9
  _DWORD *v282; // rcx
  const wchar_t *v283; // r10
  unsigned int v284; // r11d
  NTSTATUS v285; // eax
  UINT v286; // edx
  unsigned __int64 v287; // rcx
  unsigned int v288; // esi
  PVOID v289; // rax
  UINT v290; // r9d
  UINT v291; // eax
  PVOID v292; // rax
  void *v293; // rsi
  PACL v294; // rcx
  PACL v295; // r9
  int v296; // r10d
  int v297; // r11d
  int v298; // r11d
  UINT v299; // r10d
  UINT v300; // r10d
  UINT v301; // eax
  PVOID v302; // rax
  _DWORD *v303; // r9
  int v304; // r10d
  _DWORD *v305; // rax
  const void *v306; // rbx
  __int64 v307; // r8
  const void *v308; // rbx
  UINT v309; // r9d
  UINT v310; // r10d
  int v311; // r8d
  char v312; // r11
  int v313; // eax
  ULONGLONG v314; // rdx
  __int64 v315; // r15
  unsigned __int8 *v316; // r12
  PACL v317; // rax
  __int64 v318; // rbx
  __int64 Sbz1; // rcx
  int v320; // eax
  __int64 AclRevision; // rcx
  int v322; // eax
  unsigned int v323; // r8d
  unsigned int v324; // eax
  int v325; // ecx
  int v326; // edx
  _BYTE *v327; // r9
  ULONGLONG v328; // r11
  char v329; // r10
  int NumberOfBytes; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int8 NumberOfBytes_4; // [rsp+5Ch] [rbp-A4h]
  UINT v332; // [rsp+60h] [rbp-A0h] BYREF
  PACL Dacl; // [rsp+68h] [rbp-98h] BYREF
  void *Src; // [rsp+70h] [rbp-90h] BYREF
  UINT v335; // [rsp+78h] [rbp-88h] BYREF
  UINT uAddend[4]; // [rsp+80h] [rbp-80h] BYREF
  ULONGLONG v337; // [rsp+90h] [rbp-70h] BYREF
  PVOID v338[2]; // [rsp+98h] [rbp-68h] BYREF
  ULONGLONG ullAugend; // [rsp+A8h] [rbp-58h] BYREF
  ULONGLONG pullResult; // [rsp+B0h] [rbp-50h] BYREF
  SIZE_T ullAddend; // [rsp+B8h] [rbp-48h] BYREF
  UINT v342; // [rsp+C0h] [rbp-40h] BYREF
  size_t pcbLength; // [rsp+C8h] [rbp-38h] BYREF
  UINT puResult; // [rsp+D0h] [rbp-30h] BYREF
  UINT uAugend[2]; // [rsp+D8h] [rbp-28h] BYREF
  ULONGLONG v346; // [rsp+E0h] [rbp-20h] BYREF
  UINT v347; // [rsp+E8h] [rbp-18h]
  unsigned int v348; // [rsp+ECh] [rbp-14h]
  UINT v349; // [rsp+F0h] [rbp-10h] BYREF
  void *v350; // [rsp+F8h] [rbp-8h]
  unsigned int v351; // [rsp+100h] [rbp+0h]
  UINT v352; // [rsp+104h] [rbp+4h] BYREF
  UINT v353; // [rsp+108h] [rbp+8h] BYREF
  UINT v354; // [rsp+10Ch] [rbp+Ch] BYREF
  UINT v355; // [rsp+110h] [rbp+10h] BYREF
  UINT v356; // [rsp+114h] [rbp+14h] BYREF
  UINT v357; // [rsp+118h] [rbp+18h] BYREF
  size_t Size[2]; // [rsp+120h] [rbp+20h] BYREF
  UINT *v359; // [rsp+130h] [rbp+30h]
  unsigned int v360; // [rsp+138h] [rbp+38h]
  int v361; // [rsp+13Ch] [rbp+3Ch]
  UINT v362; // [rsp+140h] [rbp+40h]
  UINT v363; // [rsp+144h] [rbp+44h]
  const void **v364; // [rsp+148h] [rbp+48h]
  unsigned int v365; // [rsp+150h] [rbp+50h]
  NTSTATUS v366; // [rsp+154h] [rbp+54h] BYREF
  NTSTATUS AccessStatus; // [rsp+158h] [rbp+58h] BYREF
  int v368; // [rsp+15Ch] [rbp+5Ch] BYREF
  UINT v369[2]; // [rsp+160h] [rbp+60h] BYREF
  int v370; // [rsp+168h] [rbp+68h]
  UINT v371[2]; // [rsp+170h] [rbp+70h] BYREF
  int v372; // [rsp+178h] [rbp+78h]
  unsigned int v373; // [rsp+17Ch] [rbp+7Ch]
  UINT v374[2]; // [rsp+180h] [rbp+80h] BYREF
  PVOID v375; // [rsp+188h] [rbp+88h]
  PVOID v376; // [rsp+190h] [rbp+90h]
  PVOID v377; // [rsp+198h] [rbp+98h]
  int v378; // [rsp+1A0h] [rbp+A0h]
  ULONG v379; // [rsp+1A8h] [rbp+A8h] BYREF
  ACCESS_MASK v380; // [rsp+1ACh] [rbp+ACh] BYREF
  UINT v381; // [rsp+1B0h] [rbp+B0h]
  ACCESS_MASK GrantedAccess; // [rsp+1B4h] [rbp+B4h] BYREF
  ULONG ReturnLength; // [rsp+1B8h] [rbp+B8h] BYREF
  int v384; // [rsp+1BCh] [rbp+BCh]
  UINT v385; // [rsp+1C0h] [rbp+C0h]
  int v386; // [rsp+1C8h] [rbp+C8h]
  UINT v387; // [rsp+1D0h] [rbp+D0h]
  PVOID P; // [rsp+1D8h] [rbp+D8h]
  ULONG v389; // [rsp+1E0h] [rbp+E0h] BYREF
  int v390; // [rsp+1E8h] [rbp+E8h]
  int v391; // [rsp+1F0h] [rbp+F0h]
  UINT v392; // [rsp+1F4h] [rbp+F4h]
  __int64 v393; // [rsp+1F8h] [rbp+F8h] BYREF
  wchar_t *v394; // [rsp+200h] [rbp+100h]
  void *v395; // [rsp+208h] [rbp+108h]
  __int64 v396; // [rsp+210h] [rbp+110h] BYREF
  unsigned __int64 v397; // [rsp+218h] [rbp+118h]
  __int64 SystemInformation; // [rsp+220h] [rbp+120h] BYREF
  int v399; // [rsp+228h] [rbp+128h]
  UINT v400; // [rsp+22Ch] [rbp+12Ch]
  int v401; // [rsp+230h] [rbp+130h]
  UINT v402; // [rsp+234h] [rbp+134h]
  int v403; // [rsp+238h] [rbp+138h]
  UINT v404; // [rsp+23Ch] [rbp+13Ch]
  int v405; // [rsp+240h] [rbp+140h]
  int v406; // [rsp+244h] [rbp+144h]
  unsigned int *v407; // [rsp+248h] [rbp+148h]
  int *v408; // [rsp+250h] [rbp+150h]
  PACL v409; // [rsp+258h] [rbp+158h]
  _QWORD *v410; // [rsp+260h] [rbp+160h]
  __int64 v411; // [rsp+268h] [rbp+168h]
  int v412; // [rsp+270h] [rbp+170h]
  unsigned int v413; // [rsp+274h] [rbp+174h]
  __int128 v414; // [rsp+278h] [rbp+178h] BYREF
  ULONGLONG v415[2]; // [rsp+288h] [rbp+188h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+298h] [rbp+198h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+2B8h] [rbp+1B8h] BYREF
  _OWORD v418[2]; // [rsp+2D8h] [rbp+1D8h] BYREF
  __int64 v419; // [rsp+2F8h] [rbp+1F8h]
  _OWORD SecurityDescriptor[2]; // [rsp+300h] [rbp+200h] BYREF
  __int64 v421; // [rsp+320h] [rbp+220h]
  unsigned int *v422; // [rsp+328h] [rbp+228h]
  ACL *v423; // [rsp+330h] [rbp+230h]
  __int64 v424; // [rsp+338h] [rbp+238h]
  __int64 v425; // [rsp+340h] [rbp+240h] BYREF
  __int64 v426; // [rsp+348h] [rbp+248h] BYREF

  v410 = a4;
  v411 = a5;
  v348 = a3;
  v376 = 0LL;
  v6 = 0LL;
  v351 = 0;
  v7 = 0LL;
  v377 = 0LL;
  v8 = 0LL;
  v347 = 0;
  v397 = 0LL;
  v364 = 0LL;
  v363 = 0;
  v365 = 0;
  v407 = 0LL;
  v381 = 0;
  *(_OWORD *)v338 = 0LL;
  *(_OWORD *)uAddend = 0LL;
  if ( a2 < 4 )
  {
    Acl = -1073741762;
    goto LABEL_624;
  }
  v9 = *a1;
  v10 = a1 + 1;
  v350 = a1 + 1;
  if ( a1 + 1 < a1 )
    goto LABEL_341;
  if ( a2 - 4 < (unsigned int)v9 )
    goto LABEL_340;
  v11 = (unsigned int *)((char *)v10 + v9);
  pcbLength = (size_t)v10 + v9;
  if ( (unsigned int *)((char *)v10 + v9) < v10 || (unsigned int)v9 >= 0xFFFFFFFC )
    goto LABEL_341;
  if ( a2 - ((_DWORD)v9 + 4) < 4 )
    goto LABEL_340;
  v12 = *v11;
  v13 = v11 + 1;
  if ( v11 + 1 < v11 )
    goto LABEL_341;
  v14 = v9 + 8;
  if ( (int)v9 + 8 < (unsigned int)(v9 + 4) )
    goto LABEL_341;
  if ( a2 - v14 < (unsigned int)v12 )
    goto LABEL_340;
  v15 = (unsigned __int64)v13 + v12;
  if ( (unsigned int *)((char *)v13 + v12) < v13 )
    goto LABEL_341;
  v16 = v12 + v14;
  if ( (unsigned int)v12 + v14 < v14 )
    goto LABEL_341;
  if ( a2 - v16 < 4 )
    goto LABEL_340;
  v17 = *(_DWORD *)v15;
  LODWORD(ullAddend) = *(_DWORD *)v15;
  Dacl = (PACL)(v15 + 4);
  if ( v15 + 4 < v15 )
    goto LABEL_341;
  v18 = v16 + 4;
  if ( v16 + 4 < v16 )
    goto LABEL_341;
  if ( a2 - v18 < v17 )
  {
LABEL_340:
    Acl = -1073741762;
LABEL_342:
    v25 = 0LL;
    goto LABEL_200;
  }
  if ( v17 + v18 < v18 )
  {
LABEL_341:
    Acl = -1073741675;
    goto LABEL_342;
  }
  if ( a2 != v17 + v18 || (unsigned int)v9 + (_DWORD)v12 + v17 + 12LL != a2 )
    goto LABEL_340;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20534C53u);
  v20 = PoolWithTag;
  if ( !PoolWithTag )
  {
    Acl = -1073741801;
    goto LABEL_23;
  }
  *(_OWORD *)PoolWithTag = 0LL;
  *((_OWORD *)PoolWithTag + 1) = 0LL;
  *((_OWORD *)PoolWithTag + 2) = 0LL;
  v191 = v350;
  Acl = 0;
  if ( !v350 )
  {
LABEL_232:
    v193 = (const void *)(pcbLength + 4);
    if ( pcbLength == -4LL )
    {
      v20[4] = 0;
      *((_QWORD *)v20 + 3) = 0LL;
    }
    else
    {
      v20[4] = v12;
      if ( !(_DWORD)v12 )
        goto LABEL_245;
      v201 = ExAllocatePoolWithTag(PagedPool, v12, 0x20534C53u);
      if ( !v201 )
      {
LABEL_343:
        Acl = -1073741801;
        goto LABEL_237;
      }
      *((_QWORD *)v20 + 3) = v201;
      Acl = 0;
      memmove(v201, v193, v12);
    }
    v194 = Dacl;
    if ( !Dacl )
    {
      v20[8] = 0;
      *((_QWORD *)v20 + 5) = 0LL;
LABEL_236:
      v8 = v20;
      v20 = 0LL;
      goto LABEL_237;
    }
    v198 = ullAddend;
    v20[8] = ullAddend;
    if ( v198 )
    {
      v199 = v198;
      v200 = ExAllocatePoolWithTag(PagedPool, v198, 0x20534C53u);
      if ( v200 )
      {
        *((_QWORD *)v20 + 5) = v200;
        Acl = 0;
        memmove(v200, v194, v199);
        goto LABEL_236;
      }
      goto LABEL_343;
    }
LABEL_245:
    Acl = -1073741762;
    goto LABEL_237;
  }
  *v20 = v9;
  if ( (_DWORD)v9 )
  {
    v192 = ExAllocatePoolWithTag(PagedPool, v9, 0x20534C53u);
    if ( v192 )
      *((_QWORD *)v20 + 1) = v192;
    else
      Acl = -1073741801;
    v191 = v350;
  }
  else
  {
    Acl = -1073741762;
  }
  if ( Acl >= 0 )
  {
    memmove(*((void **)v20 + 1), v191, v9);
    goto LABEL_232;
  }
LABEL_237:
  if ( v20 )
  {
    v195 = (void *)*((_QWORD *)v20 + 1);
    if ( v195 )
    {
      ExFreePoolWithTag(v195, 0x20534C53u);
      *((_QWORD *)v20 + 1) = 0LL;
    }
    v196 = (void *)*((_QWORD *)v20 + 3);
    if ( v196 )
    {
      ExFreePoolWithTag(v196, 0x20534C53u);
      *((_QWORD *)v20 + 3) = 0LL;
    }
    v197 = (void *)*((_QWORD *)v20 + 5);
    if ( v197 )
    {
      ExFreePoolWithTag(v197, 0x20534C53u);
      *((_QWORD *)v20 + 5) = 0LL;
    }
    ExFreePoolWithTag(v20, 0x20534C53u);
  }
LABEL_23:
  v22 = 0LL;
  if ( Acl < 0 )
  {
    v22 = v8;
    v8 = 0LL;
  }
  v350 = v8;
  if ( v22 )
  {
    v223 = (void *)v22[1];
    if ( v223 )
    {
      ExFreePoolWithTag(v223, 0x20534C53u);
      v22[1] = 0LL;
    }
    v224 = (void *)v22[3];
    if ( v224 )
    {
      ExFreePoolWithTag(v224, 0x20534C53u);
      v22[3] = 0LL;
    }
    v225 = (void *)v22[5];
    if ( v225 )
    {
      ExFreePoolWithTag(v225, 0x20534C53u);
      v22[5] = 0LL;
    }
    ExFreePoolWithTag(v22, 0x20534C53u);
  }
  v6 = v8;
  if ( Acl < 0 )
    goto LABEL_311;
  v359 = 0LL;
  v23 = 0LL;
  v349 = 0;
  Acl = 0;
  if ( !v8 || (*(_QWORD *)v369 = *((_QWORD *)v8 + 1)) == 0LL )
  {
    Acl = -1073741811;
    v25 = 0LL;
    goto LABEL_200;
  }
  v24 = *v8;
  v25 = 0LL;
  if ( !(_DWORD)v24 )
  {
    Acl = -1073741811;
    goto LABEL_200;
  }
  v26 = (__int64 *)*((_QWORD *)v8 + 5);
  if ( !v26 || (v27 = v8[8]) == 0 || (ullAddend = *((_QWORD *)v8 + 3)) == 0 || (v28 = v8[4]) == 0 )
  {
    Acl = -1073741811;
    v6 = v8;
    goto LABEL_200;
  }
  Size[0] = v24;
  v342 = 0;
  Dacl = (PACL)0xFFFFFFFFLL;
  if ( v27 != 8 || v28 != 160 || (unsigned int)v24 <= 8uLL )
    goto LABEL_381;
  v29 = *v26;
  NumberOfBytes_4 = 0;
  pullResult = (unsigned int)v24 - 8LL;
  v30 = (ACL *)ExAllocatePoolWithTag(PagedPool, pullResult, 0x20534C53u);
  *(_QWORD *)v371 = v30;
  if ( !v30 )
  {
    v23 = v359;
    goto LABEL_381;
  }
  v31 = *(unsigned __int8 **)v369;
  v32 = v30;
  Dacl = v30;
  v425 = v29;
  pcbLength = pullResult & 7;
  v337 = *(_QWORD *)v369;
  NumberOfBytes = 0;
  if ( (pullResult & 7) == 0 )
  {
    v332 = -1;
    v33 = 0;
    v335 = 0;
    goto LABEL_40;
  }
  v332 = 0;
  v226 = 0;
  v227 = -1;
  v228 = 0;
  v229 = 0;
  v230 = 56;
  do
  {
    v231 = *v31++;
    if ( v229 >= 4 )
      v228 |= v231 << v230;
    else
      NumberOfBytes |= v231 << (v230 - 32);
    ++v229;
    v230 -= 8;
  }
  while ( v229 < (unsigned __int8)(pullResult & 7) );
  v332 = v228;
  v337 = (ULONGLONG)v31;
  v232 = 30LL;
  v233 = (unsigned __int8 *)(ullAddend + 126);
  v234 = (unsigned __int8 *)(ullAddend + 158);
  v235 = 16LL;
  Src = (void *)(ullAddend + 158);
  ullAugend = 16LL;
  do
  {
    v236 = v234[1];
    if ( (unsigned __int8)v236 < 0x1Fu )
    {
      v237 = funcs_1405D6C33[v236](v232 + 1, *(v233 - 2), *(v233 - 1), *v233, v233[1], (__int64)&v425, v226);
      v235 = ullAugend;
      v227 ^= v237;
      v234 = (unsigned __int8 *)Src;
    }
    v238 = *v234;
    if ( (unsigned __int8)v238 < 0x1Fu )
    {
      v239 = funcs_1405D6C33[v238](v232, *(v233 - 6), *(v233 - 5), *(v233 - 4), *(v233 - 3), (__int64)&v425, v227);
      v235 = ullAugend;
      v226 ^= v239;
      v234 = (unsigned __int8 *)Src;
    }
    v234 -= 2;
    v232 -= 2LL;
    v233 -= 8;
    Src = v234;
    ullAugend = --v235;
  }
  while ( v235 );
  v33 = NumberOfBytes ^ v226;
  v240 = v332 ^ v227;
  v241 = 0;
  v242 = pcbLength;
  v7 = 0LL;
  v8 = (unsigned int *)v350;
  v243 = v33;
  v244 = v240;
  LOBYTE(v25) = 0;
  if ( (_DWORD)pcbLength )
  {
    v245 = Dacl;
    do
    {
      p_Sbz1 = (ACL *)&v245->Sbz1;
      if ( v241 >= 4 )
      {
        v244 = __ROL4__(v244, 8);
        v247 = v244;
      }
      else
      {
        v243 = __ROL4__(v243, 8);
        v247 = v243;
      }
      ++v241;
      v245->AclRevision = v247;
      v245 = (PACL)((char *)v245 + 1);
    }
    while ( v241 < (int)v242 );
    v32 = p_Sbz1;
    Dacl = p_Sbz1;
  }
  else
  {
    v32 = Dacl;
  }
  v31 = (unsigned __int8 *)v337;
  if ( v242 <= 4 )
  {
    LODWORD(v29) = v425;
    v335 = 0;
    if ( v242 >= 4 )
      goto LABEL_40;
    v33 = v33 >> (8 * (4 - v242)) << (8 * (4 - v242));
  }
  else
  {
    v335 = v240 >> (8 * (8 - v242)) << (8 * (8 - v242));
    LODWORD(v29) = v425;
  }
  v32 = Dacl;
LABEL_40:
  ullAugend = pullResult >> 3;
  if ( pullResult >> 3 )
  {
    v34 = v31 + 2;
    v35 = v335;
    v36 = v332;
    v37 = NumberOfBytes;
    v38 = (unsigned __int8 *)(ullAddend + 158);
    pcbLength = ullAddend + 126;
    v337 = (ULONGLONG)&v32->Sbz2 + 1;
    for ( *(_QWORD *)uAugend = ullAddend + 158; ; v38 = *(unsigned __int8 **)uAugend )
    {
      v39 = v34[2] << 8;
      v40 = (unsigned __int16)v29;
      v41 = v34[3];
      v42 = (v34[1] | ((*v34 | ((*(v34 - 1) | (*(v34 - 2) << 8)) << 8)) << 8)) ^ v33;
      LODWORD(ullAddend) = v34[1] | ((*v34 | ((*(v34 - 1) | (*(v34 - 2) << 8)) << 8)) << 8);
      v43 = v34[5] | ((v34[4] | ((v41 | v39) << 8)) << 8);
      *(_QWORD *)v374 = v34 + 8;
      LODWORD(v346) = v43;
      v44 = v42 ^ v29 ^ HIDWORD(v425) ^ v43 ^ v35;
      v45 = (v44 >> 8) ^ (WORD2(v425) * (WORD1(v425) ^ v44)) ^ v42;
      v46 = (WORD1(v425) * __ROR4__(HIDWORD(v425) - v45, 11) - __ROR4__(v45, 12)) ^ v44;
      v47 = ((unsigned __int16)v29 * __ROL4__(v46 ^ HIDWORD(v425), 8) - __ROL4__(v46, 2)) ^ v45;
      v48 = __ROR4__(v47, 9) ^ (HIWORD(v425) * __ROR4__(v47 - v29, 4)) ^ v46;
      v49 = (__ROR4__(v48, 4) + WORD2(v425) * __ROR4__(v29 - v48, 10)) ^ v47;
      v50 = (WORD1(v425) * __ROL4__(HIWORD(v425) ^ v49, 4) - __ROR4__(v49, 16)) ^ v48;
      v51 = 30LL;
      v52 = ((unsigned __int16)v29 * (WORD1(v425) ^ v50) - __ROR4__(v50, 7)) ^ v49;
      v53 = 16LL;
      v54 = (v52 - v29 - HIWORD(v425)) ^ v50;
      Dacl = (PACL)16;
      v55 = __ROR4__(v54, 11) ^ (WORD2(v425) * __ROR4__(v29 - v54, 9)) ^ v52;
      v56 = (unsigned __int8 *)pcbLength;
      v57 = (WORD1(v425) * (v55 - WORD2(v425)) - (v55 >> 13)) ^ v54;
      v58 = v38;
      Src = v38;
      v59 = (v57 >> 15) ^ (v40 * __ROL4__(v57 - WORD2(v425), 3)) ^ v55;
      do
      {
        v60 = v58[1];
        if ( (unsigned __int8)v60 < 0x1Fu )
        {
          v73 = funcs_1405D6C33[v60](v51 + 1, *(v56 - 2), *(v56 - 1), *v56, v56[1], (__int64)&v425, v59);
          v53 = (__int64)Dacl;
          v57 ^= v73;
          v58 = (unsigned __int8 *)Src;
        }
        v61 = *v58;
        if ( (unsigned __int8)v61 < 0x1Fu )
        {
          v72 = funcs_1405D6C33[v61](v51, *(v56 - 6), *(v56 - 5), *(v56 - 4), *(v56 - 3), (__int64)&v425, v57);
          v53 = (__int64)Dacl;
          v59 ^= v72;
          v58 = (unsigned __int8 *)Src;
        }
        v58 -= 2;
        v51 -= 2LL;
        v56 -= 8;
        Src = v58;
        Dacl = (PACL)--v53;
      }
      while ( v53 );
      v62 = (_BYTE *)v337;
      v63 = v37 ^ v59;
      v34 = *(unsigned __int8 **)v374;
      v64 = v36 ^ v57;
      v37 = ullAddend;
      v36 = v346;
      *(_BYTE *)(v337 - 4) = v63;
      *v62 = v64;
      v65 = __ROR4__(v63, 8);
      *(v62 - 5) = v65;
      v66 = __ROR4__(v64, 8);
      *(v62 - 1) = v66;
      v67 = __ROR4__(v65, 8);
      *(v62 - 6) = v67;
      v68 = __ROR4__(v66, 8);
      *(v62 - 2) = v68;
      v69 = __ROR4__(v67, 8);
      v70 = __ROR4__(v68, 8);
      *(v62 - 7) = v69;
      *(v62 - 3) = v70;
      v35 = __ROR4__(v70, 8);
      v33 = __ROR4__(v69, 8);
      v71 = ullAugend-- == 1;
      v337 = (ULONGLONG)(v62 + 8);
      if ( v71 )
        break;
      LODWORD(v29) = v425;
    }
    LOBYTE(v25) = NumberOfBytes_4;
    Acl = v349;
    v8 = (unsigned int *)v350;
    v7 = v364;
  }
  v74 = 0LL;
  for ( i = *(UINT **)v371; v74 < pullResult; ++v74 )
    LOBYTE(v25) = *(_BYTE *)(*(_QWORD *)v371 + v74) ^ (unsigned __int8)v25;
  if ( (unsigned __int8)v25 == *(_QWORD *)(pullResult + *(_QWORD *)v369) )
  {
    v23 = *(UINT **)v371;
    v76 = pullResult;
    v77 = v342;
    i = 0LL;
    v359 = *(UINT **)v371;
  }
  else
  {
    v23 = v359;
    v77 = -1073425151;
    v76 = Size[0];
  }
  if ( i )
  {
    ExFreePoolWithTag(i, 0x20534C53u);
    v23 = v359;
  }
  if ( v77 >= 0 )
  {
    v78 = v23;
    v376 = v23;
    v23 = 0LL;
    v359 = 0LL;
    v351 = v76;
    goto LABEL_59;
  }
LABEL_381:
  v76 = v351;
  Acl = -1073741823;
  v78 = (UINT *)v376;
LABEL_59:
  if ( v23 )
  {
    ExFreePoolWithTag(v23, 0x20534C53u);
    v76 = v351;
    v359 = 0LL;
  }
  v6 = v8;
  if ( Acl < 0 )
    goto LABEL_311;
  if ( v76 < 4 )
    goto LABEL_382;
  v79 = *v78;
  v332 = *v78;
  if ( v78 + 1 < v78 )
  {
    Acl = -1073741675;
    goto LABEL_311;
  }
  if ( v76 - 4 < 4 )
  {
LABEL_382:
    Acl = -1073741762;
    goto LABEL_311;
  }
  v80 = v78[1];
  v81 = (char *)(v78 + 2);
  if ( v78 + 2 < v78 + 1 )
    goto LABEL_386;
  if ( v76 - 8 < (unsigned int)v80 )
  {
LABEL_383:
    Acl = -1073741762;
LABEL_385:
    v6 = v8;
    goto LABEL_311;
  }
  if ( (unsigned int)v80 >= 0xFFFFFFF8 )
  {
LABEL_386:
    Acl = -1073741675;
    goto LABEL_385;
  }
  v82 = (unsigned __int64)&v81[v80];
  v83 = (unsigned int)v80;
  if ( (char *)v78 + v76 < &v81[v80] || (unsigned __int64)v376 + v76 - (_QWORD)v81 - v80 >= 8 )
  {
    Acl = -1073741762;
    goto LABEL_90;
  }
  Src = 0LL;
  v84 = 0LL;
  NumberOfBytes = 0;
  v85 = 0;
  if ( v78 == (UINT *)-8LL )
    goto LABEL_81;
  v86 = (char *)(v78 + 2);
  if ( v82 < (unsigned __int64)v81 )
  {
LABEL_388:
    Acl = -1073741675;
    goto LABEL_90;
  }
  if ( v82 <= (unsigned __int64)v81 )
    goto LABEL_80;
  do
  {
    if ( v86 + 4 < v86 )
      goto LABEL_388;
    if ( (unsigned __int64)(v86 + 4) > v82 )
      goto LABEL_387;
    v87 = *(_DWORD *)v86 + 4;
    if ( *(_DWORD *)v86 >= 0xFFFFFFFC )
    {
      Acl = -1073741675;
      goto LABEL_88;
    }
    v406 = *(_DWORD *)v86 + 4;
    v88 = &v86[v87];
    if ( v88 < v86 )
      goto LABEL_388;
    v86 += v87;
    if ( (unsigned __int64)v88 > v82 )
      goto LABEL_387;
    NumberOfBytes = ++v85;
  }
  while ( (unsigned __int64)v88 < v82 );
  v84 = Src;
LABEL_80:
  if ( v86 != (char *)v82 )
  {
LABEL_387:
    Acl = -1073741811;
    goto LABEL_90;
  }
LABEL_81:
  if ( !(_DWORD)v80 )
    goto LABEL_84;
  v84 = ExAllocatePoolWithTag(PagedPool, v80, 0x20534C53u);
  Src = v84;
  if ( v84 )
  {
    v83 = v80;
LABEL_84:
    if ( v78 != (UINT *)-8LL )
    {
      memmove(v84, v81, v83);
      v84 = Src;
    }
    v338[1] = v84;
    v338[0] = (PVOID)__PAIR64__(v80, NumberOfBytes);
    Acl = 0;
  }
  else
  {
    Acl = -1073741801;
  }
  v79 = v332;
LABEL_88:
  if ( Acl >= 0 && v79 != LODWORD(v338[0]) )
    goto LABEL_383;
LABEL_90:
  v6 = v8;
  if ( Acl < 0 )
    goto LABEL_311;
  if ( !v338[1] || !LODWORD(v338[0]) )
  {
    Acl = -1073741811;
    goto LABEL_98;
  }
  v89 = *(_DWORD *)v338[1];
  if ( (char *)v338[1] + 4 < v338[1] )
  {
    Acl = -1073741675;
LABEL_98:
    if ( Acl >= 0 )
    {
      if ( !v338[1] )
      {
        v25 = 0LL;
        Acl = -1073741811;
        goto LABEL_202;
      }
      if ( LODWORD(v338[0]) <= 1 )
      {
LABEL_396:
        Acl = -1073741811;
        goto LABEL_311;
      }
      v91 = (UINT *)v338[1];
      v92 = 0;
      do
      {
        v93 = *v91;
        v94 = v91 + 1;
        if ( v91 + 1 < v91 )
          goto LABEL_691;
        v91 = (unsigned int *)((char *)v94 + v93);
        if ( (unsigned int *)((char *)v94 + v93) < v94 )
          goto LABEL_691;
        ++v92;
      }
      while ( !v92 );
      v95 = *v91;
      v96 = v91 + 1;
      NumberOfBytes = *v91;
      if ( v91 + 1 < v91 )
      {
LABEL_691:
        Acl = -1073741675;
        goto LABEL_311;
      }
      v381 = v95;
      v97 = 0LL;
      if ( v95 )
        v97 = v96;
      Src = v97;
      v407 = v97;
      if ( LODWORD(v338[0]) <= 2 )
      {
        Acl = -1073741811;
      }
      else
      {
        v98 = (unsigned int *)v338[1];
        for ( j = 0; j < 2; ++j )
        {
          v100 = *v98;
          v101 = v98 + 1;
          if ( v98 + 1 < v98 )
            goto LABEL_384;
          v98 = (unsigned int *)((char *)v101 + v100);
          if ( (unsigned int *)((char *)v101 + v100) < v101 )
            goto LABEL_384;
        }
        v102 = *v98;
        v103 = (ACL *)(v98 + 1);
        LODWORD(ullAddend) = *v98;
        if ( v98 + 1 >= v98 )
        {
          v413 = v102;
          v104 = 0LL;
          if ( v102 )
            v104 = v103;
          Dacl = v104;
          v423 = v104;
          v105 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20534C53u);
          v108 = v105;
          if ( !v105 )
          {
            Acl = -1073741801;
            goto LABEL_130;
          }
          *(_OWORD *)v105 = 0LL;
          *((_OWORD *)v105 + 1) = 0LL;
          *((_OWORD *)v105 + 2) = 0LL;
          Acl = 0;
          v109 = Src;
          v107 = 0LL;
          if ( Src )
          {
            v110 = NumberOfBytes;
            v108[4] = NumberOfBytes;
            if ( v110 )
            {
              v111 = ExAllocatePoolWithTag(PagedPool, v110, 0x20534C53u);
              v109 = Src;
              if ( v111 )
                *((_QWORD *)v108 + 3) = v111;
              else
                Acl = -1073741801;
              v110 = NumberOfBytes;
            }
            else
            {
              Acl = -1073741762;
            }
            v107 = v110;
            if ( Acl < 0 )
              goto LABEL_129;
            memmove(*((void **)v108 + 3), v109, v110);
          }
          if ( !Dacl )
          {
            v108[8] = 0;
            *((_QWORD *)v108 + 5) = 0LL;
            goto LABEL_128;
          }
          v112 = (unsigned int)ullAddend;
          v108[8] = ullAddend;
          if ( (_DWORD)v112 )
          {
            Size[0] = v112;
            v113 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v112, 0x20534C53u);
            if ( v113 )
            {
              *((_QWORD *)v108 + 5) = v113;
              Acl = 0;
              memmove(v113, Dacl, Size[0]);
LABEL_128:
              v7 = (const void **)v108;
              v364 = (const void **)v108;
              v108 = 0LL;
              goto LABEL_129;
            }
            Acl = -1073741801;
          }
          else
          {
            Acl = -1073741762;
          }
LABEL_129:
          if ( v108 )
          {
            v248 = (void *)*((_QWORD *)v108 + 1);
            if ( v248 )
            {
              ExFreePoolWithTag(v248, 0x20534C53u);
              *((_QWORD *)v108 + 1) = 0LL;
            }
            v249 = (void *)*((_QWORD *)v108 + 3);
            if ( v249 )
            {
              ExFreePoolWithTag(v249, 0x20534C53u);
              *((_QWORD *)v108 + 3) = 0LL;
            }
            v250 = (void *)*((_QWORD *)v108 + 5);
            if ( v250 )
            {
              ExFreePoolWithTag(v250, 0x20534C53u);
              *((_QWORD *)v108 + 5) = 0LL;
            }
            ExFreePoolWithTag(v108, 0x20534C53u);
          }
LABEL_130:
          v6 = v8;
          if ( Acl < 0 )
            goto LABEL_311;
          if ( v365 > 0x68 )
          {
            if ( v365 <= 0xCC )
            {
              switch ( v365 )
              {
                case 0xCCu:
                  IsAppLicensed = sub_14095E968(v338, v7, v107, uAddend);
                  break;
                case 0x69u:
                  IsAppLicensed = sub_14095D1D8(v338, v7, v107, uAddend);
                  break;
                case 0x6Au:
                  IsAppLicensed = sub_14095C970(v338, v7, v107, uAddend);
                  break;
                case 0x6Bu:
                  IsAppLicensed = sub_1405BA040((__int64)v338, (__int64)v7, v107, (__int64)uAddend);
                  break;
                case 0x6Du:
                  IsAppLicensed = SPCallServerHandleIsAppLicensed((__int64)v338, (__int64)v7, v107, (__int64)uAddend);
                  break;
                case 0x6Eu:
                  IsAppLicensed = sub_14095C574(v338, v7, v107, uAddend);
                  break;
                case 0x6Fu:
                  IsAppLicensed = sub_14095B2AC(v338, v7, v107, uAddend);
                  break;
                case 0x70u:
                  IsAppLicensed = sub_14095B50C(v338, v7, v107, uAddend);
                  break;
                case 0x71u:
                  IsAppLicensed = SPCallServerHandleClepKdf((__int64)v338, (__int64)v7, v107, (__int64)uAddend);
                  break;
                default:
                  goto LABEL_623;
              }
            }
            else
            {
              switch ( v365 )
              {
                case 0xCDu:
                  IsAppLicensed = SPCallServerHandleCheckLicense(v338, v7, v107, uAddend);
                  break;
                case 0xCEu:
                  v379 = 0;
                  v396 = 8LL;
                  ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v396, 8u, &v379);
                  if ( v8[4] != 160 )
                    goto LABEL_338;
                  v306 = (const void *)*((_QWORD *)v8 + 3);
                  if ( (memcmp(qword_140982CF0, v306, 0xA0uLL)
                     || *((_DWORD *)v7 + 4) != 160
                     || memcmp(qword_1409831F0, v7[3], 0xA0uLL)
                     || v8[8] != 8
                     || **((_QWORD **)v8 + 5) != 0x5638EBB72F3355A5LL
                     || *((_DWORD *)v7 + 8) != 8
                     || *(_QWORD *)v7[5] != 0x9F2DD8784FE939B7uLL)
                    && (memcmp(qword_140983010, v306, 0xA0uLL)
                     || *((_DWORD *)v7 + 4) != 160
                     || memcmp(qword_140983150, v7[3], 0xA0uLL)
                     || v8[8] != 8
                     || **((_QWORD **)v8 + 5) != 0x5638EBB72F3355A5LL
                     || *((_DWORD *)v7 + 8) != 8
                     || *(_QWORD *)v7[5] != 0x9F2DD8784FE939B7uLL) )
                  {
                    v308 = (const void *)*((_QWORD *)v8 + 3);
                    if ( (memcmp(qword_1409829D0, v308, 0xA0uLL)
                       || *((_DWORD *)v7 + 4) != 160
                       || memcmp(qword_140982C50, v7[3], 0xA0uLL)
                       || v8[8] != 8
                       || **((_QWORD **)v8 + 5) != 0xF10D668DB2BB8BB9uLL
                       || *((_DWORD *)v7 + 8) != 8
                       || *(_QWORD *)v7[5] != 0x768DFD321621EA95LL)
                      && (memcmp(qword_1409827F0, v308, 0xA0uLL)
                       || *((_DWORD *)v7 + 4) != 160
                       || memcmp(qword_140982930, v7[3], 0xA0uLL)
                       || v8[8] != 8
                       || **((_QWORD **)v8 + 5) != 0xF10D668DB2BB8BB9uLL
                       || *((_DWORD *)v7 + 8) != 8
                       || *(_QWORD *)v7[5] != 0x768DFD321621EA95LL) )
                    {
                      goto LABEL_338;
                    }
                  }
                  IsAppLicensed = sub_1405BA61C((__int64)v338, (__int64)v7, v307, (__int64)uAddend);
                  v6 = v8;
                  break;
                case 0xCFu:
                  IsAppLicensed = sub_14095BEE0(v338, v7, v107, uAddend);
                  break;
                case 0xD0u:
                  IsAppLicensed = SPCallServerHandleGetAppPolicyValue(
                                    (__int64)v338,
                                    (__int64)v7,
                                    v107,
                                    (__int64)uAddend);
                  break;
                case 0xD1u:
                  IsAppLicensed = sub_14095DF00(v338, v7, v107, uAddend);
                  break;
                case 0xD2u:
                  IsAppLicensed = sub_14095AA90(v338, v7, v107, uAddend);
                  break;
                case 0xD3u:
                  IsAppLicensed = sub_14095A694(v338, v7, v107, uAddend);
                  break;
                default:
                  goto LABEL_623;
              }
            }
            goto LABEL_256;
          }
          if ( v365 == 104 )
          {
            IsAppLicensed = sub_14095D8EC(v338, v7, v107, uAddend);
            goto LABEL_256;
          }
          if ( v365 <= 0x17 )
          {
            if ( v365 != 23 )
            {
              if ( !v365 )
              {
                Policy = SPCallServerHandleQueryPolicy(v338, v7, v348, uAddend);
LABEL_137:
                Acl = Policy;
LABEL_138:
                v115 = Acl < 0;
                goto LABEL_139;
              }
              if ( v365 != 1 )
              {
                switch ( v365 )
                {
                  case 2u:
                    Policy = SPCallServerHandleAuthenticateCaller(0LL, (__int64)v7, v348, (__int64)uAddend);
                    goto LABEL_137;
                  case 4u:
                    Policy = sub_14095AF04(v338, v7, v107, uAddend);
                    goto LABEL_137;
                  case 5u:
                    Policy = SPCallServerHandleWaitForDisplayWindow(v338, v7, v107, uAddend);
                    goto LABEL_137;
                  case 6u:
                    Policy = sub_14095EE20(v338, v7, v107, uAddend);
                    goto LABEL_137;
                  case 7u:
                    Policy = sub_14095D64C(v338, v7, v107, uAddend);
                    goto LABEL_137;
                  case 0x16u:
                    Policy = SPCallServerHandleFileUsnQuery(v338, v106, v107, uAddend);
                    goto LABEL_137;
                }
LABEL_623:
                Acl = sub_14095E5CC(0LL, uAddend);
                if ( Acl < 0 )
                  goto LABEL_624;
LABEL_140:
                v397 = __rdtsc();
                puResult = 8;
                Acl = RtlUIntAdd(8u, uAddend[1], &puResult);
                if ( Acl >= 0 )
                {
                  v116 = (puResult + 7) & 0xFFFFFFF8;
                  if ( v116 < puResult )
                  {
                    Acl = -1073741675;
                  }
                  else
                  {
                    puResult = (puResult + 7) & 0xFFFFFFF8;
                    if ( v116 )
                    {
                      v117 = (char *)ExAllocatePoolWithTag(PagedPool, v116, 0x20534C53u);
                      v118 = v117;
                      if ( v117 )
                      {
                        Src = v117;
                        *(_DWORD *)v117 = uAddend[0];
                        Acl = RtlULongLongAdd((ULONGLONG)v117, 4uLL, (ULONGLONG *)&Src);
                        if ( Acl >= 0 )
                        {
                          v120 = Src;
                          *(_DWORD *)Src = uAddend[1];
                          Acl = RtlULongLongAdd((ULONGLONG)v120, v119, (ULONGLONG *)&Src);
                          if ( Acl >= 0 )
                          {
                            v121 = Src;
                            *(_QWORD *)&v118[puResult - 8] = v397;
                            memmove(v121, *(const void **)&uAddend[2], uAddend[1]);
                            v377 = v118;
                            v118 = 0LL;
                            v347 = puResult;
                          }
                        }
                        if ( v118 )
                          ExFreePoolWithTag(v118, 0x20534C53u);
                      }
                      else
                      {
                        Acl = -1073741801;
                      }
                    }
                    else
                    {
                      Acl = -1073741762;
                    }
                  }
                }
                v6 = v8;
                if ( Acl < 0 )
                  goto LABEL_311;
                v122 = 0;
                P = 0LL;
                if ( v377 )
                {
                  if ( v347 )
                  {
                    v123 = (__int64 *)v7[5];
                    if ( v123 )
                    {
                      v124 = *((_DWORD *)v7 + 8);
                      if ( v124 )
                      {
                        pcbLength = (size_t)v7[3];
                        if ( pcbLength )
                        {
                          v125 = *((_DWORD *)v7 + 4);
                          if ( v125 )
                          {
                            if ( v124 != 8 )
                              goto LABEL_688;
                            if ( v125 != 160 )
                              goto LABEL_688;
                            v126 = *v123;
                            v127 = 0;
                            NumberOfBytes_4 = 0;
                            for ( k = 0LL; k < v347; ++k )
                              v127 ^= *((_BYTE *)v377 + k);
                            NumberOfBytes_4 = v127;
                            v129 = ExAllocatePoolWithTag(PagedPool, v347 + 8LL, 0x20534C53u);
                            v346 = (ULONGLONG)v129;
                            if ( !v129 )
                            {
LABEL_688:
                              Acl = -1073741823;
LABEL_176:
                              v25 = 0LL;
                              if ( P )
                              {
                                ExFreePoolWithTag(P, 0x20534C53u);
                                P = 0LL;
                              }
                              v6 = v8;
                              if ( Acl >= 0 )
                              {
                                v362 = 0;
                                v175 = *(_DWORD *)v7;
                                NumberOfBytes = 4;
                                Acl = RtlUIntAdd(4u, v175, (UINT *)&NumberOfBytes);
                                if ( Acl >= 0 )
                                {
                                  Acl = RtlUIntAdd(NumberOfBytes, 4u, (UINT *)&NumberOfBytes);
                                  if ( Acl >= 0 )
                                  {
                                    Acl = RtlUIntAdd(NumberOfBytes, *((_DWORD *)v7 + 4), (UINT *)&NumberOfBytes);
                                    if ( Acl >= 0 )
                                    {
                                      Acl = RtlUIntAdd(NumberOfBytes, 4u, (UINT *)&NumberOfBytes);
                                      if ( Acl >= 0 )
                                      {
                                        Acl = RtlUIntAdd(NumberOfBytes, *((_DWORD *)v7 + 8), (UINT *)&NumberOfBytes);
                                        if ( Acl >= 0 )
                                          v176 = NumberOfBytes;
                                        v362 = v176;
                                      }
                                    }
                                  }
                                }
                                if ( Acl >= 0 )
                                {
                                  if ( v176 )
                                  {
                                    v177 = ExAllocatePoolWithTag(PagedPool, v176, 0x20534C53u);
                                    v178 = v177;
                                    if ( v177 )
                                    {
                                      pullResult = (ULONGLONG)v177;
                                      *v177 = *(_DWORD *)v7;
                                      Acl = RtlULongLongAdd((ULONGLONG)v177, 4uLL, &pullResult);
                                      if ( Acl >= 0 )
                                      {
                                        memmove((void *)pullResult, v7[1], *(unsigned int *)v7);
                                        Acl = RtlULongLongAdd(pullResult, *(unsigned int *)v7, &pullResult);
                                        if ( Acl >= 0 )
                                        {
                                          v179 = pullResult;
                                          *(_DWORD *)pullResult = *((_DWORD *)v7 + 4);
                                          Acl = RtlULongLongAdd(v179, 4uLL, &pullResult);
                                          if ( Acl >= 0 )
                                          {
                                            memmove((void *)pullResult, v7[3], *((unsigned int *)v7 + 4));
                                            Acl = RtlULongLongAdd(pullResult, *((unsigned int *)v7 + 4), &pullResult);
                                            if ( Acl >= 0 )
                                            {
                                              v180 = pullResult;
                                              *(_DWORD *)pullResult = *((_DWORD *)v7 + 8);
                                              Acl = RtlULongLongAdd(v180, 4uLL, &pullResult);
                                              if ( Acl >= 0 )
                                              {
                                                memmove((void *)pullResult, v7[5], *((unsigned int *)v7 + 8));
                                                Acl = RtlULongLongAdd(
                                                        pullResult,
                                                        *((unsigned int *)v7 + 8),
                                                        &pullResult);
                                                if ( Acl >= 0 )
                                                {
                                                  v25 = v178;
                                                  v178 = 0LL;
                                                  v363 = v362;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      if ( v178 )
                                        ExFreePoolWithTag(v178, 0x20534C53u);
                                    }
                                    else
                                    {
                                      Acl = -1073741801;
                                    }
                                  }
                                  else
                                  {
                                    Acl = -1073741762;
                                  }
                                }
                                v6 = v8;
                                if ( Acl >= 0 )
                                {
                                  v181 = (_DWORD *)v411;
                                  *v410 = v25;
                                  v25 = 0LL;
                                  *v181 = v363;
                                }
                              }
                              goto LABEL_200;
                            }
                            v130 = (unsigned __int8 *)v377;
                            v426 = v126;
                            v131 = (ULONGLONG)v129;
                            Src = v377;
                            v337 = (ULONGLONG)v129;
                            v332 = 0;
                            NumberOfBytes = 0;
                            v132 = v347 & 7;
                            if ( (v347 & 7) == 0 )
                            {
                              v133 = -1;
LABEL_163:
                              ullAugend = (unsigned __int64)v347 >> 3;
                              if ( ullAugend )
                              {
                                v134 = pcbLength;
                                v135 = v130 + 2;
                                pcbLength = v131 + 7;
                                v136 = (unsigned __int8 *)(v134 + 129);
                                v137 = v134 + 2;
                                Size[0] = v134 + 129;
                                pullResult = v134 + 2;
                                do
                                {
                                  v138 = 16LL;
                                  v139 = 0LL;
                                  v140 = (unsigned __int8 *)v137;
                                  v141 = *(v135 - 1) | (*(v135 - 2) << 8);
                                  v142 = v135[2] << 8;
                                  v143 = *v135;
                                  v135 += 8;
                                  v337 = 16LL;
                                  v144 = *(v135 - 7) | ((v143 | (v141 << 8)) << 8);
                                  v145 = v144 ^ v122;
                                  v146 = v136;
                                  LODWORD(ullAddend) = *(v135 - 3) | ((*(v135 - 4) | ((*(v135 - 5) | v142) << 8)) << 8);
                                  Dacl = (PACL)((unsigned int)ullAddend ^ v133);
                                  v147 = ullAddend ^ v133;
                                  Src = v136;
                                  do
                                  {
                                    v148 = *(v146 - 1);
                                    if ( (unsigned __int8)v148 < 0x1Fu )
                                    {
                                      v189 = funcs_1405D6C33[v148](
                                               v139,
                                               *(v140 - 2),
                                               *(v140 - 1),
                                               *v140,
                                               v140[1],
                                               (__int64)&v426,
                                               v147);
                                      v138 = v337;
                                      v145 ^= v189;
                                      v146 = (unsigned __int8 *)Src;
                                    }
                                    v149 = *v146;
                                    if ( (unsigned __int8)v149 < 0x1Fu )
                                    {
                                      v190 = funcs_1405D6C33[v149](
                                               v139 + 1,
                                               v140[2],
                                               v140[3],
                                               v140[4],
                                               v140[5],
                                               (__int64)&v426,
                                               v145);
                                      v138 = v337;
                                      v147 ^= v190;
                                      v146 = (unsigned __int8 *)Src;
                                    }
                                    v146 += 2;
                                    v139 += 2LL;
                                    v140 += 8;
                                    Src = v146;
                                    v337 = --v138;
                                  }
                                  while ( v138 );
                                  v150 = (HIWORD(v426) * ((unsigned __int16)v426 + __ROR4__(~v147, 5))) ^ v145;
                                  v151 = (v150 >> 10) ^ (WORD1(v426) * (HIWORD(v426) ^ v150)) ^ v147;
                                  v152 = __ROR4__(v151, 10) ^ (WORD2(v426) * __ROR4__(v426 ^ v151, 12)) ^ v150;
                                  v153 = (HIWORD(v426) * __ROR4__(v152 - v426, 14) - __ROL4__(v152, 8)) ^ v151;
                                  v154 = (__ROL4__(v153, 2) + (unsigned __int16)v426
                                                            * __ROR4__(HIDWORD(v426) + v153, 15)) ^ v152;
                                  Dacl = (PACL)((WORD1(v426) * (WORD2(v426) ^ v154)) ^ __ROR4__(v154, 6) ^ (unsigned int)v153);
                                  v155 = (HIDWORD(v426) - ((unsigned int)Dacl ^ v426)) ^ v154;
                                  v156 = (HIWORD(v426) * __ROL4__(WORD1(v426) ^ v155, 6) - __ROL4__(v155, 2)) ^ (unsigned int)Dacl;
                                  v157 = ((unsigned __int16)v426 * (v156 - WORD2(v426)) - (v156 >> 13)) ^ v155;
                                  v158 = (WORD1(v426) * __ROR4__(v157 + HIDWORD(v426), 9) - __ROL4__(v157, 2)) ^ v156;
                                  v159 = (_BYTE *)pcbLength;
                                  v137 = pullResult;
                                  v160 = ullAddend;
                                  v161 = (__ROL4__(v158, 10) + WORD2(v426) * __ROL4__(v158 - v426, 5)) ^ v157;
                                  v162 = v161 ^ v426 ^ HIDWORD(v426) ^ v158;
                                  v163 = NumberOfBytes ^ v161;
                                  v164 = v332 ^ v162;
                                  *(_BYTE *)(pcbLength - 4) = v163;
                                  *v159 = v164;
                                  v165 = __ROR4__(v163, 8);
                                  *(v159 - 5) = v165;
                                  v166 = __ROR4__(v164, 8);
                                  *(v159 - 1) = v166;
                                  v167 = __ROR4__(v165, 8);
                                  *(v159 - 6) = v167;
                                  v168 = __ROR4__(v166, 8);
                                  *(v159 - 2) = v168;
                                  v169 = __ROR4__(v167, 8);
                                  *(v159 - 7) = v169;
                                  v170 = __ROR4__(v168, 8);
                                  *(v159 - 3) = v170;
                                  v133 = __ROR4__(v170, 8);
                                  v122 = __ROR4__(v169, 8);
                                  v71 = ullAugend-- == 1;
                                  pcbLength = (size_t)(v159 + 8);
                                  v136 = (unsigned __int8 *)Size[0];
                                  NumberOfBytes = v144;
                                  v332 = v160;
                                }
                                while ( !v71 );
                                v127 = NumberOfBytes_4;
                                v8 = (unsigned int *)v350;
                                v7 = v364;
                              }
                              v171 = (void *)v346;
                              v172 = v347 + 8LL;
                              *(_QWORD *)(v346 + v347) = v127;
                              v424 = v172;
                              P = v171;
                              Acl = 0;
                              if ( (_DWORD)v172 )
                              {
                                Size[0] = (unsigned int)v172;
                                v173 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v172, 0x20534C53u);
                                v174 = v173;
                                if ( v173 )
                                {
                                  memmove(v173, v171, Size[0]);
                                  v7[1] = v174;
                                  *(_DWORD *)v7 = v172;
                                }
                                else
                                {
                                  Acl = -1073741801;
                                }
                              }
                              else
                              {
                                Acl = -1073741762;
                              }
                              goto LABEL_176;
                            }
                            v332 = 0;
                            v309 = 0;
                            NumberOfBytes = 0;
                            v310 = 0;
                            v311 = 0;
                            v312 = 56;
                            do
                            {
                              v313 = *v130++;
                              if ( v311 >= 4 )
                                v309 |= v313 << v312;
                              else
                                v310 |= v313 << (v312 - 32);
                              ++v311;
                              v312 -= 8;
                            }
                            while ( v311 < v132 );
                            NumberOfBytes = v310;
                            v332 = v309;
                            Src = v130;
                            v314 = 16LL;
                            v315 = 0xFFFFFFFFLL;
                            ullAugend = 16LL;
                            v316 = (unsigned __int8 *)(pcbLength + 126);
                            v317 = (PACL)(pcbLength + 158);
                            Dacl = (PACL)(pcbLength + 158);
                            v318 = 30LL;
                            do
                            {
                              Sbz1 = v317->Sbz1;
                              if ( (unsigned __int8)Sbz1 < 0x1Fu )
                              {
                                v320 = funcs_1405D6C33[Sbz1](
                                         v318 + 1,
                                         *(v316 - 2),
                                         *(v316 - 1),
                                         *v316,
                                         v316[1],
                                         (__int64)&v426,
                                         v122);
                                v314 = ullAugend;
                                v315 = v320 ^ (unsigned int)v315;
                                v317 = Dacl;
                              }
                              AclRevision = v317->AclRevision;
                              if ( (unsigned __int8)AclRevision < 0x1Fu )
                              {
                                v322 = funcs_1405D6C33[AclRevision](
                                         v318,
                                         *(v316 - 6),
                                         *(v316 - 5),
                                         *(v316 - 4),
                                         *(v316 - 3),
                                         (__int64)&v426,
                                         v315);
                                v314 = ullAugend;
                                v122 ^= v322;
                                v317 = Dacl;
                              }
                              v317 = (PACL)((char *)v317 - 2);
                              v318 -= 2LL;
                              v316 -= 8;
                              Dacl = v317;
                              ullAugend = --v314;
                            }
                            while ( v314 );
                            v122 ^= NumberOfBytes;
                            v323 = v332 ^ v315;
                            v127 = NumberOfBytes_4;
                            v324 = v122;
                            v8 = (unsigned int *)v350;
                            v325 = v332 ^ v315;
                            Dacl = (PACL)v315;
                            v326 = 0;
                            v7 = v364;
                            if ( v132 )
                            {
                              v327 = (_BYTE *)v337;
                              do
                              {
                                v328 = (ULONGLONG)(v327 + 1);
                                if ( v326 >= 4 )
                                {
                                  v325 = __ROL4__(v325, 8);
                                  v329 = v325;
                                }
                                else
                                {
                                  v324 = __ROL4__(v324, 8);
                                  v329 = v324;
                                }
                                ++v326;
                                *v327++ = v329;
                              }
                              while ( v326 < v132 );
                              v131 = v328;
                              v337 = v328;
                            }
                            else
                            {
                              v131 = v337;
                            }
                            if ( (unsigned int)v132 <= 4 )
                            {
                              v133 = 0;
                              if ( (unsigned int)v132 >= 4 )
                                goto LABEL_685;
                              v122 = v122 >> (8 * (4 - v132)) << (8 * (4 - v132));
                            }
                            else
                            {
                              v133 = v323 >> (8 * (8 - v132)) << (8 * (8 - v132));
                            }
                            v131 = v337;
LABEL_685:
                            v130 = (unsigned __int8 *)Src;
                            goto LABEL_163;
                          }
                        }
                      }
                    }
                  }
                }
                goto LABEL_396;
              }
              v215 = qword_140D2C4C0;
              v380 = 0;
              memset(v418, 0, sizeof(v418));
              v419 = 0LL;
              v366 = 0;
              memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
              Src = (void *)qword_140D2C4C0;
              v216 = RtlLengthSid(*(PSID *)(qword_140D2C4C0 + 392));
              v217 = RtlLengthSid(*(PSID *)(v215 + 384)) + v216;
              v218 = RtlLengthSid(*(PSID *)(v215 + 272)) + 32 + v217;
              v219 = (ACL *)ExAllocatePoolWithTag(PagedPool, v218, 0x20534C53u);
              Dacl = v219;
              if ( !v219 )
              {
                Acl = -1073741801;
LABEL_335:
                v6 = v8;
                if ( Acl < 0 )
                  goto LABEL_311;
                Policy = SPCallServerHandleUpdatePolicies((__int64)v338, (__int64)v7, v348, (__int64)uAddend);
                goto LABEL_137;
              }
              Acl = RtlCreateAcl(v219, v218, 2u);
              if ( Acl >= 0 )
              {
                Acl = RtlpAddKnownAce(Dacl, *((void **)Src + 48), 0);
                if ( Acl >= 0 )
                {
                  Acl = RtlpAddKnownAce(Dacl, *((void **)Src + 49), 0);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlpAddKnownAce(Dacl, *((void **)Src + 34), 0);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlCreateSecurityDescriptor(v418, 1u);
                      if ( Acl >= 0 )
                      {
                        Acl = RtlSetDaclSecurityDescriptor(v418, 1u, Dacl, 0);
                        if ( Acl >= 0 )
                        {
                          SeCaptureSubjectContext(&SubjectSecurityContext);
                          v220 = SeAccessCheck(
                                   v418,
                                   &SubjectSecurityContext,
                                   0,
                                   0x20u,
                                   0,
                                   0LL,
                                   (PGENERIC_MAPPING)&IopFileMapping,
                                   1,
                                   &v380,
                                   &v366);
                          SeReleaseSubjectContext(&SubjectSecurityContext);
                          if ( !v220 )
                            Acl = v366;
                        }
                      }
                    }
                  }
                }
              }
              ExFreePoolWithTag(Dacl, 0x20534C53u);
              if ( Acl < 0 )
                goto LABEL_335;
              v389 = 0;
              v393 = 8LL;
              ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v393, 8u, &v389);
              if ( v8[4] == 160 )
              {
                if ( (v221 = (const void *)*((_QWORD *)v8 + 3), !memcmp(qword_140982A70, v221, 0xA0uLL))
                  && *((_DWORD *)v7 + 4) == 160
                  && !memcmp(qword_1409830B0, v7[3], 0xA0uLL)
                  && v8[8] == 8
                  && **((_QWORD **)v8 + 5) == 0xA564595855B292C4uLL
                  && *((_DWORD *)v7 + 8) == 8
                  && *(_QWORD *)v7[5] == 0x1B732BD76B4D09FCLL
                  || !memcmp(qword_140982D90, v221, 0xA0uLL)
                  && *((_DWORD *)v7 + 4) == 160
                  && !memcmp(qword_140982750, v7[3], 0xA0uLL)
                  && v8[8] == 8
                  && **((_QWORD **)v8 + 5) == 0x93278D843BBDC445uLL
                  && *((_DWORD *)v7 + 8) == 8
                  && *(_QWORD *)v7[5] == 0x6223E824AB21D998LL )
                {
                  v399 = 0;
                  v222 = 0;
                  if ( (BYTE2(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 7) == 0 )
                    v222 = -2147024891;
                  Acl = v222;
                  goto LABEL_335;
                }
              }
LABEL_338:
              Acl = -2147024891;
              goto LABEL_385;
            }
            v203 = qword_140D2C4C0;
            GrantedAccess = 0;
            memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
            v421 = 0LL;
            AccessStatus = 0;
            memset(&SubjectContext, 0, sizeof(SubjectContext));
            Src = (void *)qword_140D2C4C0;
            v204 = RtlLengthSid(*(PSID *)(qword_140D2C4C0 + 392));
            v205 = RtlLengthSid(*(PSID *)(v203 + 384)) + v204;
            v206 = RtlLengthSid(*(PSID *)(v203 + 272)) + 32 + v205;
            v207 = (ACL *)ExAllocatePoolWithTag(PagedPool, v206, 0x20534C53u);
            Dacl = v207;
            if ( v207 )
            {
              Acl = RtlCreateAcl(v207, v206, 2u);
              if ( Acl >= 0 )
              {
                Acl = RtlpAddKnownAce(Dacl, *((void **)Src + 48), 0);
                if ( Acl >= 0 )
                {
                  Acl = RtlpAddKnownAce(Dacl, *((void **)Src + 49), 0);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlpAddKnownAce(Dacl, *((void **)Src + 34), 0);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                      if ( Acl >= 0 )
                      {
                        Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Dacl, 0);
                        if ( Acl >= 0 )
                        {
                          SeCaptureSubjectContext(&SubjectContext);
                          v210 = SeAccessCheck(
                                   SecurityDescriptor,
                                   &SubjectContext,
                                   0,
                                   0x20u,
                                   0,
                                   0LL,
                                   (PGENERIC_MAPPING)&IopFileMapping,
                                   1,
                                   &GrantedAccess,
                                   &AccessStatus);
                          SeReleaseSubjectContext(&SubjectContext);
                          if ( !v210 )
                            Acl = AccessStatus;
                        }
                      }
                    }
                  }
                }
              }
              ExFreePoolWithTag(Dacl, 0x20534C53u);
              if ( Acl >= 0 )
              {
                ReturnLength = 0;
                SystemInformation = 8LL;
                ZwQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, 8u, &ReturnLength);
                if ( v8[4] != 160 )
                  goto LABEL_338;
                v211 = (const void *)*((_QWORD *)v8 + 3);
                if ( !memcmp(qword_140982BB0, v211, 0xA0uLL)
                  && *((_DWORD *)v7 + 4) == 160
                  && !memcmp(qword_140982B10, v7[3], 0xA0uLL)
                  && v8[8] == 8
                  && **((_QWORD **)v8 + 5) == 0x35DCEB18766AABAALL
                  && *((_DWORD *)v7 + 8) == 8
                  && *(_QWORD *)v7[5] == 0x14CEA8BAE086077CLL
                  || !memcmp(qword_140982ED0, v211, 0xA0uLL)
                  && *((_DWORD *)v7 + 4) == 160
                  && !memcmp(qword_140983290, v7[3], 0xA0uLL)
                  && v8[8] == 8
                  && **((_QWORD **)v8 + 5) == 0xF10D668DB2BB8BB9uLL
                  && *((_DWORD *)v7 + 8) == 8
                  && *(_QWORD *)v7[5] == 0x768DFD321621EA95LL )
                {
                  Acl = 0;
                }
                else
                {
                  v212 = (const void *)*((_QWORD *)v8 + 3);
                  Acl = 0;
                  if ( (memcmp(qword_140983330, v212, 0xA0uLL)
                     || *((_DWORD *)v7 + 4) != 160
                     || memcmp(sub_140982890, v7[3], 0xA0uLL)
                     || v8[8] != 8
                     || **((_QWORD **)v8 + 5) != 0xA10B922F1A2F2A8AuLL
                     || *((_DWORD *)v7 + 8) != 8
                     || *(_QWORD *)v7[5] != 0xC349B50B0A716A96uLL)
                    && (memcmp(qword_140982E30, v212, 0xA0uLL)
                     || *((_DWORD *)v7 + 4) != 160
                     || memcmp(qword_140982F70, v7[3], 0xA0uLL)
                     || v8[8] != 8
                     || **((_QWORD **)v8 + 5) != 0xA6723CF736811074uLL
                     || *((_DWORD *)v7 + 8) != 8
                     || *(_QWORD *)v7[5] != 0x7511056E178DA076LL) )
                  {
                    goto LABEL_338;
                  }
                }
                v368 = 0;
                updated = QueryUpdateFileEaAllowedExt(&v368);
                if ( updated == -1073741637 || (Acl = updated, updated >= 0) && v368 != 1 )
                {
                  v214 = Acl;
                  if ( (BYTE2(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 7) == 0 )
                    v214 = -2147024891;
                  Acl = v214;
                }
              }
            }
            else
            {
              Acl = -1073741801;
            }
            v6 = v8;
            if ( Acl < 0 )
              goto LABEL_624;
            IsAppLicensed = SPCallServerHandleFileIntegrityUpdate(v338, v208, v209, uAddend);
LABEL_256:
            v115 = IsAppLicensed < 0;
            Acl = IsAppLicensed;
LABEL_139:
            if ( v115 )
              goto LABEL_311;
            goto LABEL_140;
          }
          if ( v365 == 24 )
          {
            IsAppLicensed = SPCallServerHandleFileIntegrityQuery(v338, v106, v107, uAddend);
            goto LABEL_256;
          }
          if ( v365 != 30 )
          {
            if ( v365 == 31 )
            {
              v268 = 0;
              stru_140D2C248.Length = 0;
              stru_140D2C248.Buffer = 0LL;
              if ( qword_140D2C0C8 )
              {
                ExFreePoolWithTag(qword_140D2C0C8, 0x20534C53u);
                qword_140D2C0C8 = 0LL;
              }
              dword_140D2C138 = 0;
              dword_140D2C0C4 = 0;
              v342 = 0;
              v371[0] = 0;
              v269 = RtlUIntAdd(4u, 4u, v371);
              Acl = v269;
              v270 = 0;
              if ( v269 >= 0 )
                v270 = v371[0];
              v402 = v270;
              if ( v269 >= 0 )
              {
                Acl = RtlUIntAdd(0, v270, &v342);
                if ( Acl >= 0 )
                  v268 = v342;
              }
              if ( Acl < 0 )
                goto LABEL_506;
              v354 = 8;
              Acl = RtlUIntAdd(8u, v268, &v354);
              if ( Acl >= 0 )
              {
                v355 = 0;
                v273 = (v354 + 7) & 0xFFFFFFF8;
                if ( v273 >= v354 )
                {
                  v355 = (v354 + 7) & 0xFFFFFFF8;
                  Acl = RtlUIntAdd(v273, 8u, &v355);
                  if ( Acl >= 0 )
                    v271 = v355;
                }
                else
                {
                  Acl = -1073741675;
                }
                if ( Acl < 0 )
                  goto LABEL_506;
                v335 = v272;
                Acl = RtlUIntAdd(v272, v271, &v335);
                if ( Acl >= 0 )
                {
                  Acl = RtlUIntAdd(v335, v274, &v335);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlUIntAdd(v335, *((_DWORD *)v7 + 4), &v335);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlUIntAdd(v335, v275, &v335);
                      if ( Acl >= 0 )
                      {
                        Acl = RtlUIntAdd(v335, *((_DWORD *)v7 + 8), &v335);
                        v276 = v387;
                        if ( Acl >= 0 )
                          v276 = v335;
                        v387 = v276;
                      }
                    }
                  }
                }
              }
              if ( Acl < 0 )
                goto LABEL_506;
              uAddend[1] = v268;
              if ( v268 )
              {
                v277 = ExAllocatePoolWithTag(PagedPool, v268, 0x20534C53u);
                if ( v277 )
                {
                  *(_QWORD *)&uAddend[2] = v277;
                  uAddend[0] = 0;
                  v390 = 0;
                  v414 = 0LL;
                  v403 = 0;
                  Acl = RtlULongLongAdd((ULONGLONG)v277, 4uLL, (ULONGLONG *)&v414 + 1);
                  if ( Acl < 0 )
                    goto LABEL_506;
                  if ( v278 + 2 <= (_DWORD *)((char *)v278 + uAddend[1]) )
                  {
                    v266 = (_DWORD *)*((_QWORD *)&v414 + 1);
                    *v278 = v279;
                    v267 = v390;
                    goto LABEL_505;
                  }
                  goto LABEL_504;
                }
                goto LABEL_503;
              }
            }
            else
            {
              if ( v365 != 37 )
              {
                switch ( v365 )
                {
                  case 'd':
                    IsAppLicensed = sub_14095E704(v338, v7, v107, uAddend);
                    break;
                  case 'e':
                    IsAppLicensed = sub_14095E368(v338, v7, v107, uAddend);
                    break;
                  case 'f':
                    Acl = -1073741822;
                    goto LABEL_311;
                  case 'g':
                    IsAppLicensed = sub_14095B8B0(v338, v7, v107, uAddend);
                    break;
                  default:
                    goto LABEL_623;
                }
                goto LABEL_256;
              }
              v251 = 0;
              v370 = 0;
              v408 = 0LL;
              v384 = 0;
              if ( LODWORD(v338[0]) > 3 )
              {
                v252 = v338[1];
                ullAugend = (ULONGLONG)v338[1];
                NumberOfBytes = 0;
                while ( 1 )
                {
                  LODWORD(ullAddend) = *v252;
                  Acl = RtlULongLongAdd((ULONGLONG)v252, 4uLL, &ullAugend);
                  if ( Acl < 0 )
                    break;
                  Acl = RtlULongLongAdd(ullAugend, (unsigned int)ullAddend, &ullAugend);
                  if ( Acl < 0 )
                    break;
                  v252 = (_DWORD *)ullAugend;
                  if ( (unsigned int)++NumberOfBytes >= 3 )
                  {
                    LODWORD(ullAddend) = *(_DWORD *)ullAugend;
                    Acl = RtlULongLongAdd(ullAugend, 4uLL, &ullAugend);
                    if ( Acl >= 0 )
                    {
                      v254 = ullAddend;
                      v253 = (int *)ullAugend;
                      v384 = ullAddend;
                      if ( !(_DWORD)ullAddend )
                        v253 = 0LL;
                      v408 = v253;
                    }
                    break;
                  }
                }
                if ( Acl < 0 )
                  goto LABEL_506;
                if ( v254 != 4 )
                {
LABEL_504:
                  Acl = -1073741789;
                  goto LABEL_506;
                }
                v370 = *v253;
              }
              else
              {
                Acl = -1073741811;
              }
              if ( Acl < 0 )
                goto LABEL_506;
              v374[0] = 0;
              v369[0] = 0;
              v255 = RtlUIntAdd(4u, 4u, v374);
              v257 = 0;
              Acl = v255;
              v258 = 0;
              if ( v255 >= 0 )
                v258 = v374[0];
              v400 = v258;
              if ( v255 >= 0 )
              {
                Acl = RtlUIntAdd(0, v258, v369);
                if ( Acl >= 0 )
                  v256 = v369[0];
              }
              if ( Acl < 0 )
                goto LABEL_506;
              v385 = v257;
              v352 = 8;
              Acl = RtlUIntAdd(8u, v256, &v352);
              if ( Acl >= 0 )
              {
                v353 = 0;
                v261 = (v352 + 7) & 0xFFFFFFF8;
                if ( v261 >= v352 )
                {
                  v353 = (v352 + 7) & 0xFFFFFFF8;
                  Acl = RtlUIntAdd(v261, 8u, &v353);
                  if ( Acl >= 0 )
                    v260 = v353;
                }
                else
                {
                  Acl = -1073741675;
                }
                if ( Acl < 0 )
                  goto LABEL_506;
                uAugend[0] = 4;
                Acl = RtlUIntAdd(4u, v260, uAugend);
                if ( Acl >= 0 )
                {
                  Acl = RtlUIntAdd(uAugend[0], v262, uAugend);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlUIntAdd(uAugend[0], *((_DWORD *)v7 + 4), uAugend);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlUIntAdd(uAugend[0], 4u, uAugend);
                      if ( Acl >= 0 )
                      {
                        Acl = RtlUIntAdd(uAugend[0], *((_DWORD *)v7 + 8), uAugend);
                        if ( Acl >= 0 )
                          v263 = uAugend[0];
                        v385 = v263;
                      }
                    }
                  }
                }
                if ( Acl >= 0 )
                  v251 = v263;
              }
              if ( Acl < 0 )
              {
LABEL_506:
                v6 = v8;
                goto LABEL_138;
              }
              if ( v348 >= v251 )
                dword_140D2C0C4 = v370;
              uAddend[1] = v259;
              if ( v259 )
              {
                v264 = ExAllocatePoolWithTag(PagedPool, v259, 0x20534C53u);
                if ( v264 )
                {
                  *(_QWORD *)&uAddend[2] = v264;
                  uAddend[0] = 0;
                  v386 = 0;
                  *(_OWORD *)Size = 0LL;
                  v401 = 0;
                  Acl = RtlULongLongAdd((ULONGLONG)v264, 4uLL, &Size[1]);
                  if ( Acl >= 0 )
                  {
                    if ( v265 + 2 <= (_DWORD *)((char *)v265 + uAddend[1]) )
                    {
                      v266 = (_DWORD *)Size[1];
                      *v265 = 4;
                      v267 = v386;
LABEL_505:
                      *v266 = v267;
                      ++uAddend[0];
                      goto LABEL_506;
                    }
                    goto LABEL_504;
                  }
                  goto LABEL_506;
                }
LABEL_503:
                Acl = -1073741801;
                goto LABEL_506;
              }
            }
            Acl = -1073741762;
            goto LABEL_506;
          }
          v280 = 0;
          v375 = 0LL;
          LODWORD(v281) = 0;
          v360 = 0;
          LODWORD(ullAddend) = 0;
          v361 = 0;
          v395 = 0LL;
          v373 = 0;
          v394 = 0LL;
          v372 = 0;
          pcbLength = 0LL;
          if ( LODWORD(v338[0]) > 3 )
          {
            v282 = v338[1];
            v337 = (ULONGLONG)v338[1];
            v342 = 0;
            while ( 1 )
            {
              LODWORD(v346) = *v282;
              Acl = RtlULongLongAdd((ULONGLONG)v282, 4uLL, &v337);
              if ( Acl < 0 )
                break;
              Acl = RtlULongLongAdd(v337, (unsigned int)v346, &v337);
              if ( Acl < 0 )
                break;
              v282 = (_DWORD *)v337;
              if ( ++v342 >= 3 )
              {
                LODWORD(v346) = *(_DWORD *)v337;
                Acl = RtlULongLongAdd(v337, 4uLL, &v337);
                if ( Acl >= 0 )
                {
                  v284 = v346;
                  v283 = (const wchar_t *)v337;
                  v372 = v346;
                  if ( !(_DWORD)v346 )
                    v283 = 0LL;
                  v394 = (wchar_t *)v283;
                }
                break;
              }
            }
            if ( Acl < 0 )
              goto LABEL_607;
            if ( !v284
              || (v284 & 1) != 0
              || v283[((unsigned __int64)v284 >> 1) - 1]
              || StringCbLengthW(v283, v284, &pcbLength) < 0 )
            {
LABEL_569:
              Acl = -1073741762;
              goto LABEL_607;
            }
            if ( pcbLength + 2 != v372 )
            {
              Acl = -1073741762;
              goto LABEL_607;
            }
            v281 = pcbLength >> 1;
            v395 = v394;
            v373 = pcbLength >> 1;
          }
          else
          {
            Acl = -1073741811;
          }
          if ( Acl < 0 )
            goto LABEL_607;
          if ( 2 * (_DWORD)v281 != -2 )
          {
            Size[0] = (unsigned int)(2 * v281 + 2);
            v292 = ExAllocatePoolWithTag(PagedPool, Size[0], 0x20534C53u);
            v293 = v292;
            if ( !v292 )
            {
              Acl = -1073741801;
              goto LABEL_607;
            }
            memmove(v292, v395, Size[0]);
            v360 = v373;
            v375 = v293;
            v409 = 0LL;
            v391 = 0;
            if ( LODWORD(v338[0]) > 4 )
            {
              v294 = (PACL)v338[1];
              Dacl = (PACL)v338[1];
              while ( 1 )
              {
                LODWORD(v346) = *(_DWORD *)&v294->AclRevision;
                Acl = RtlULongLongAdd((ULONGLONG)v294, 4uLL, (ULONGLONG *)&Dacl);
                if ( Acl < 0 )
                  break;
                Acl = RtlULongLongAdd((ULONGLONG)Dacl, (unsigned int)v346, (ULONGLONG *)&Dacl);
                if ( Acl < 0 )
                  break;
                v294 = Dacl;
                if ( (unsigned int)(v297 + 1) >= 4 )
                {
                  Acl = RtlULongLongAdd((ULONGLONG)Dacl, 4uLL, (ULONGLONG *)&Dacl);
                  if ( Acl >= 0 )
                  {
                    v295 = Dacl;
                    v296 = v298;
                    v391 = v298;
                    if ( !v298 )
                      v295 = 0LL;
                    v409 = v295;
                  }
                  break;
                }
              }
              if ( Acl < 0 )
                goto LABEL_607;
              if ( v296 != 4 )
                goto LABEL_587;
              v361 = *(_DWORD *)&v295->AclRevision;
            }
            else
            {
              Acl = -1073741811;
            }
            if ( Acl >= 0 )
            {
              v349 = 0;
              LODWORD(v346) = 0;
              v285 = RtlUIntAdd(4u, 4u, &v349);
              Acl = v285;
              v286 = 0;
              if ( v285 >= 0 )
                v286 = v349;
              v404 = v286;
              if ( v285 >= 0 )
              {
                Acl = RtlUIntAdd(0, v286, (UINT *)&v346);
                if ( Acl >= 0 )
                  v280 = v346;
              }
              if ( Acl >= 0 )
              {
                if ( qword_140D2C0C8 )
                {
                  ExFreePoolWithTag(qword_140D2C0C8, 0x20534C53u);
                  qword_140D2C0C8 = 0LL;
                }
                v287 = 2LL * v360;
                stru_140D2C248.Length = 0;
                stru_140D2C248.Buffer = 0LL;
                Size[0] = v287;
                if ( v287 > 0xFFFFFFFF )
                {
                  Acl = -1073741675;
                }
                else
                {
                  Acl = RtlUIntAdd(v287, 2u, (UINT *)&ullAddend);
                  if ( Acl < 0 )
                    goto LABEL_607;
                  if ( !(_DWORD)ullAddend )
                    goto LABEL_588;
                  v288 = ullAddend;
                  v289 = ExAllocatePoolWithTag(PagedPool, (unsigned int)ullAddend, 0x20534C53u);
                  if ( !v289 )
                    goto LABEL_589;
                  qword_140D2C0C8 = v289;
                  memset(v289, 0, v288);
                  memmove(qword_140D2C0C8, v375, LODWORD(Size[0]));
                  RtlInitUnicodeString(&stru_140D2C248, (PCWSTR)qword_140D2C0C8);
                  dword_140D2C138 = v361;
                  v356 = 8;
                  Acl = RtlUIntAdd(8u, v280, &v356);
                  if ( Acl < 0 )
                  {
LABEL_600:
                    if ( Acl < 0 )
                      goto LABEL_607;
                    uAddend[1] = v280;
                    if ( v280 )
                    {
                      v302 = ExAllocatePoolWithTag(PagedPool, v280, 0x20534C53u);
                      if ( v302 )
                      {
                        *(_QWORD *)&uAddend[2] = v302;
                        uAddend[0] = 0;
                        v378 = 0;
                        *(_OWORD *)v415 = 0LL;
                        v405 = 0;
                        Acl = RtlULongLongAdd((ULONGLONG)v302, 4uLL, &v415[1]);
                        if ( Acl < 0 )
                          goto LABEL_607;
                        if ( v303 + 2 <= (_DWORD *)((char *)v303 + uAddend[1]) )
                        {
                          v305 = (_DWORD *)v415[1];
                          *v303 = v304;
                          *v305 = v378;
                          ++uAddend[0];
                          goto LABEL_607;
                        }
LABEL_587:
                        Acl = -1073741789;
                        goto LABEL_607;
                      }
LABEL_589:
                      Acl = -1073741801;
                      goto LABEL_607;
                    }
LABEL_588:
                    Acl = -1073741762;
                    goto LABEL_607;
                  }
                  v357 = 0;
                  v291 = (v356 + 7) & 0xFFFFFFF8;
                  if ( v291 >= v356 )
                  {
                    v357 = (v356 + 7) & 0xFFFFFFF8;
                    Acl = RtlUIntAdd(v291, 8u, &v357);
                    if ( Acl >= 0 )
                      v290 = v357;
                  }
                  else
                  {
                    Acl = -1073741675;
                  }
                  if ( Acl >= 0 )
                  {
                    v332 = 4;
                    Acl = RtlUIntAdd(4u, v290, &v332);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlUIntAdd(v332, v299, &v332);
                      if ( Acl >= 0 )
                      {
                        Acl = RtlUIntAdd(v332, *((_DWORD *)v7 + 4), &v332);
                        if ( Acl >= 0 )
                        {
                          Acl = RtlUIntAdd(v332, v300, &v332);
                          if ( Acl >= 0 )
                          {
                            Acl = RtlUIntAdd(v332, *((_DWORD *)v7 + 8), &v332);
                            v301 = v392;
                            if ( Acl >= 0 )
                              v301 = v332;
                            v392 = v301;
                          }
                        }
                      }
                    }
                    goto LABEL_600;
                  }
                }
              }
            }
LABEL_607:
            if ( v375 )
            {
              ExFreePoolWithTag(v375, 0x20534C53u);
              v375 = 0LL;
            }
            v6 = v8;
            if ( Acl < 0 )
              goto LABEL_624;
            goto LABEL_140;
          }
          goto LABEL_569;
        }
LABEL_384:
        Acl = -1073741675;
      }
      goto LABEL_385;
    }
LABEL_311:
    v25 = 0LL;
    goto LABEL_200;
  }
  v412 = *(_DWORD *)v338[1];
  v90 = 0LL;
  if ( v89 )
    v90 = (unsigned int *)((char *)v338[1] + 4);
  v422 = v90;
  Acl = 0;
  if ( v89 == 4 )
  {
    v365 = *v90;
    goto LABEL_98;
  }
  Acl = -1073741789;
LABEL_624:
  v25 = 0LL;
LABEL_200:
  if ( v338[1] )
    ExFreePoolWithTag(v338[1], 0x20534C53u);
LABEL_202:
  *(_QWORD *)uAddend = 0LL;
  if ( *(_QWORD *)&uAddend[2] )
  {
    ExFreePoolWithTag(*(PVOID *)&uAddend[2], 0x20534C53u);
    *(_QWORD *)&uAddend[2] = 0LL;
  }
  if ( v376 )
    ExFreePoolWithTag(v376, 0x20534C53u);
  if ( v6 )
  {
    v182 = (void *)v6[1];
    if ( v182 )
    {
      ExFreePoolWithTag(v182, 0x20534C53u);
      v6[1] = 0LL;
    }
    v183 = (void *)v6[3];
    if ( v183 )
    {
      ExFreePoolWithTag(v183, 0x20534C53u);
      v6[3] = 0LL;
    }
    v184 = (void *)v6[5];
    if ( v184 )
    {
      ExFreePoolWithTag(v184, 0x20534C53u);
      v6[5] = 0LL;
    }
    ExFreePoolWithTag(v6, 0x20534C53u);
  }
  if ( v25 )
    ExFreePoolWithTag(v25, 0x20534C53u);
  if ( v7 )
  {
    v185 = (void *)v7[1];
    if ( v185 )
    {
      ExFreePoolWithTag(v185, 0x20534C53u);
      v7[1] = 0LL;
    }
    v186 = (void *)v7[3];
    if ( v186 )
    {
      ExFreePoolWithTag(v186, 0x20534C53u);
      v7[3] = 0LL;
    }
    v187 = (void *)v7[5];
    if ( v187 )
    {
      ExFreePoolWithTag(v187, 0x20534C53u);
      v7[5] = 0LL;
    }
    ExFreePoolWithTag(v7, 0x20534C53u);
  }
  if ( v377 )
    ExFreePoolWithTag(v377, 0x20534C53u);
  return (unsigned int)Acl;
}
