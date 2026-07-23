/*
 * XREFs of sub_140689640 @ 0x140689640
 * Callers:
 *     Callout @ 0x1406C5DB0 (Callout.c)
 * Callees:
 *     SeAccessCheck @ 0x140209C20 (SeAccessCheck.c)
 *     RtlLengthSid @ 0x140209E10 (RtlLengthSid.c)
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     KeAcquireGuardedMutex @ 0x140241970 (KeAcquireGuardedMutex.c)
 *     StringCbLengthW @ 0x14025C2A4 (StringCbLengthW.c)
 *     RtlULongLongAdd @ 0x1402E0E30 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x1402E0E50 (RtlUIntAdd.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memcmp @ 0x1403D2070 (memcmp.c)
 *     ZwQuerySystemInformation @ 0x1403F8830 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     sub_1405BE2C0 @ 0x1405BE2C0 (sub_1405BE2C0.c)
 *     sub_1405BE89C @ 0x1405BE89C (sub_1405BE89C.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405F7240 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405F73E0 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x140606130 (RtlpAddKnownAce.c)
 *     SeCaptureSubjectContext @ 0x14060C950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     RtlCreateSecurityDescriptor @ 0x1406320E0 (RtlCreateSecurityDescriptor.c)
 *     SPCallServerHandleIsAppLicensed @ 0x14065B238 (SPCallServerHandleIsAppLicensed.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x14065B804 (SPCallServerHandleGetAppPolicyValue.c)
 *     SPCallServerHandleQueryPolicy @ 0x140688AF0 (SPCallServerHandleQueryPolicy.c)
 *     sub_1406B0950 @ 0x1406B0950 (sub_1406B0950.c)
 *     sub_1406B0B20 @ 0x1406B0B20 (sub_1406B0B20.c)
 *     sub_1406B0BE0 @ 0x1406B0BE0 (sub_1406B0BE0.c)
 *     sub_1406B1000 @ 0x1406B1000 (sub_1406B1000.c)
 *     sub_1406B1080 @ 0x1406B1080 (sub_1406B1080.c)
 *     sub_1406B19A0 @ 0x1406B19A0 (sub_1406B19A0.c)
 *     sub_1406B1A10 @ 0x1406B1A10 (sub_1406B1A10.c)
 *     sub_1406B1B60 @ 0x1406B1B60 (sub_1406B1B60.c)
 *     sub_1406B1E30 @ 0x1406B1E30 (sub_1406B1E30.c)
 *     sub_1406B1EA0 @ 0x1406B1EA0 (sub_1406B1EA0.c)
 *     sub_1406B2E90 @ 0x1406B2E90 (sub_1406B2E90.c)
 *     sub_1406B2F40 @ 0x1406B2F40 (sub_1406B2F40.c)
 *     sub_1406B4050 @ 0x1406B4050 (sub_1406B4050.c)
 *     sub_1406B4850 @ 0x1406B4850 (sub_1406B4850.c)
 *     sub_1406B4880 @ 0x1406B4880 (sub_1406B4880.c)
 *     sub_1406B48B0 @ 0x1406B48B0 (sub_1406B48B0.c)
 *     sub_1406B4BA0 @ 0x1406B4BA0 (sub_1406B4BA0.c)
 *     sub_1406B4EB0 @ 0x1406B4EB0 (sub_1406B4EB0.c)
 *     sub_1406B5460 @ 0x1406B5460 (sub_1406B5460.c)
 *     sub_1406B5D70 @ 0x1406B5D70 (sub_1406B5D70.c)
 *     sub_1406B7500 @ 0x1406B7500 (sub_1406B7500.c)
 *     sub_1406B9090 @ 0x1406B9090 (sub_1406B9090.c)
 *     sub_1406B9880 @ 0x1406B9880 (sub_1406B9880.c)
 *     sub_1406BA1D0 @ 0x1406BA1D0 (sub_1406BA1D0.c)
 *     sub_1406BA320 @ 0x1406BA320 (sub_1406BA320.c)
 *     sub_1406BDEF0 @ 0x1406BDEF0 (sub_1406BDEF0.c)
 *     sub_1406BE0A0 @ 0x1406BE0A0 (sub_1406BE0A0.c)
 *     sub_1406BEDC0 @ 0x1406BEDC0 (sub_1406BEDC0.c)
 *     SPCallServerHandleClepKdf @ 0x1406D8574 (SPCallServerHandleClepKdf.c)
 *     sub_1406DAC80 @ 0x1406DAC80 (sub_1406DAC80.c)
 *     SPCallServerHandleUpdatePolicies @ 0x1406E13C0 (SPCallServerHandleUpdatePolicies.c)
 *     SPCallServerHandleAuthenticateCaller @ 0x1406E1DF4 (SPCallServerHandleAuthenticateCaller.c)
 *     SPCallServerHandleFileIntegrityUpdate @ 0x140723F74 (SPCallServerHandleFileIntegrityUpdate.c)
 *     SPCallServerHandleFileIntegrityQuery @ 0x140724594 (SPCallServerHandleFileIntegrityQuery.c)
 *     SPCallServerHandleFileUsnQuery @ 0x140724ABC (SPCallServerHandleFileUsnQuery.c)
 *     SPCallServerHandleCheckLicense @ 0x140727088 (SPCallServerHandleCheckLicense.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x140788F9C (SPCallServerHandleWaitForDisplayWindow.c)
 *     sub_1409617F4 @ 0x1409617F4 (sub_1409617F4.c)
 *     sub_140961BF0 @ 0x140961BF0 (sub_140961BF0.c)
 *     sub_140962064 @ 0x140962064 (sub_140962064.c)
 *     sub_14096240C @ 0x14096240C (sub_14096240C.c)
 *     sub_14096266C @ 0x14096266C (sub_14096266C.c)
 *     sub_140962A10 @ 0x140962A10 (sub_140962A10.c)
 *     sub_140963040 @ 0x140963040 (sub_140963040.c)
 *     sub_1409636D4 @ 0x1409636D4 (sub_1409636D4.c)
 *     sub_140963AD0 @ 0x140963AD0 (sub_140963AD0.c)
 *     sub_140964338 @ 0x140964338 (sub_140964338.c)
 *     sub_1409647AC @ 0x1409647AC (sub_1409647AC.c)
 *     sub_1409647BC @ 0x1409647BC (sub_1409647BC.c)
 *     sub_140964A5C @ 0x140964A5C (sub_140964A5C.c)
 *     sub_140965070 @ 0x140965070 (sub_140965070.c)
 *     sub_1409654D8 @ 0x1409654D8 (sub_1409654D8.c)
 *     sub_14096573C @ 0x14096573C (sub_14096573C.c)
 *     sub_140965874 @ 0x140965874 (sub_140965874.c)
 *     sub_140965AD8 @ 0x140965AD8 (sub_140965AD8.c)
 *     sub_140965F90 @ 0x140965F90 (sub_140965F90.c)
 *     sub_1409661F0 @ 0x1409661F0 (sub_1409661F0.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140689640(unsigned int *a1, unsigned int a2, unsigned int a3, _QWORD *a4, __int64 a5)
{
  _QWORD *v6; // rbx
  UINT *v7; // r12
  void *v8; // rdi
  const void **v9; // r15
  void *v10; // r13
  unsigned int *v11; // r14
  int Acl; // esi
  SIZE_T v13; // r12
  unsigned int *v14; // rcx
  unsigned int *v15; // r9
  SIZE_T v16; // rdi
  unsigned int *v17; // rcx
  unsigned int v18; // r9d
  unsigned int *v19; // r8
  unsigned int v20; // r10d
  unsigned int v21; // ecx
  unsigned int v22; // r8d
  unsigned int *PoolWithTag; // rax
  unsigned int *v24; // rbx
  _QWORD *v25; // rbx
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  UINT *v29; // rcx
  void *v30; // rax
  PVOID v31; // rax
  const void *v32; // r12
  PVOID v33; // rax
  const void *v34; // rdi
  UINT v35; // eax
  UINT v36; // r12d
  PVOID v37; // rax
  void *v38; // rcx
  void *v39; // rcx
  void *v40; // rcx
  unsigned __int64 v41; // rdx
  __int64 *v42; // rbx
  unsigned int v43; // r8d
  unsigned int v44; // r9d
  __int64 v45; // rbx
  char v46; // r12
  unsigned __int8 v47; // di
  ACL *v48; // rax
  int v49; // r10d
  unsigned __int8 *v50; // r8
  PACL v51; // rcx
  bool v52; // zf
  int v53; // eax
  unsigned int v54; // r12d
  int v55; // ebx
  UINT v56; // r11d
  char v57; // r9
  int v58; // edx
  __int64 v59; // rdi
  unsigned __int8 *v60; // r15
  unsigned __int8 *v61; // rax
  ULONGLONG v62; // rdx
  __int64 v63; // rcx
  int v64; // eax
  __int64 v65; // rcx
  int v66; // eax
  UINT v67; // ebx
  int v68; // r8d
  unsigned int v69; // edx
  unsigned int v70; // eax
  UINT v71; // ecx
  PACL v72; // r9
  ACL *p_Sbz1; // r11
  UCHAR v74; // r10
  unsigned __int8 *v75; // rsi
  UINT v76; // r15d
  UINT v77; // edi
  UINT v78; // r14d
  ULONGLONG v79; // r11
  int v80; // edx
  int v81; // r8d
  int v82; // eax
  int v83; // r12d
  UINT v84; // edx
  unsigned int v85; // r15d
  int v86; // r12d
  int v87; // r15d
  int v88; // r12d
  int v89; // r15d
  int v90; // r12d
  int v91; // r15d
  __int64 v92; // r13
  int v93; // r12d
  __int64 v94; // rdx
  int v95; // r15d
  unsigned int v96; // r12d
  unsigned __int8 *v97; // rbx
  unsigned int v98; // r15d
  unsigned __int8 *v99; // rax
  int v100; // r12d
  __int64 v101; // rcx
  int v102; // eax
  __int64 v103; // rcx
  int v104; // eax
  _BYTE *v105; // r11
  int v106; // r12d
  int v107; // r15d
  int v108; // r12d
  int v109; // r15d
  int v110; // r12d
  int v111; // r15d
  int v112; // r12d
  int v113; // r15d
  ULONGLONG v114; // rax
  PVOID j; // r8
  signed int v116; // ebx
  UINT v117; // edi
  UINT v118; // r11d
  SIZE_T v119; // rsi
  char *v120; // rbx
  unsigned __int64 v121; // rdx
  size_t v122; // r9
  PVOID v123; // rax
  int v124; // r8d
  char *v125; // rcx
  unsigned int v126; // eax
  char *v127; // r10
  void *v128; // rcx
  void *v129; // rcx
  void *v130; // rcx
  void *v131; // rcx
  void *v132; // rcx
  void *v133; // rcx
  int v135; // edx
  unsigned int *v136; // rax
  UINT *v137; // rax
  int v138; // edx
  __int64 v139; // r8
  unsigned int *v140; // rcx
  UINT v141; // ecx
  unsigned int *v142; // rdx
  unsigned int *v143; // rax
  UINT *v144; // rax
  unsigned int k; // edx
  __int64 v146; // r8
  unsigned int *v147; // rcx
  UINT v148; // ecx
  unsigned int *v149; // r8
  ULONGLONG v150; // rax
  unsigned int *v151; // rax
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r8
  unsigned int *v155; // rbx
  SIZE_T v156; // rax
  PVOID v157; // rax
  size_t v158; // rax
  PVOID v159; // rax
  void *v160; // rcx
  void *v161; // rcx
  void *v162; // rcx
  int IsAppLicensed; // eax
  __int64 v164; // rsi
  ULONG v165; // ebx
  ULONG v166; // ebx
  ULONG v167; // ebx
  ACL *v168; // rax
  BOOLEAN v169; // bl
  const void *v170; // rbx
  int v171; // eax
  __int64 v172; // rsi
  ULONG v173; // ebx
  ULONG v174; // ebx
  ULONG v175; // ebx
  ACL *v176; // rax
  __int64 v177; // rdx
  __int64 v178; // r8
  BOOLEAN v179; // bl
  unsigned int v180; // esi
  const void *v181; // rbx
  const void *v182; // rbx
  int updated; // eax
  int v184; // eax
  unsigned int v185; // ebx
  UINT *v186; // rcx
  int *v187; // r10
  UINT v188; // r11d
  NTSTATUS v189; // eax
  UINT v190; // r9d
  UINT v191; // r10d
  UINT v192; // edx
  UINT v193; // ecx
  unsigned int v194; // r9d
  UINT v195; // r11d
  UINT v196; // eax
  UINT v197; // ecx
  UINT v198; // r10d
  PVOID v199; // rax
  _DWORD *v200; // r9
  int v201; // r11d
  _DWORD *v202; // rax
  UINT v203; // ebx
  NTSTATUS v204; // eax
  UINT v205; // r10d
  UINT v206; // edx
  UINT v207; // ecx
  UINT v208; // r9d
  UINT v209; // r10d
  UINT v210; // r11d
  UINT v211; // eax
  UINT v212; // r11d
  UINT v213; // r11d
  UINT v214; // eax
  PVOID v215; // rax
  _DWORD *v216; // r9
  int v217; // r11d
  _DWORD *v218; // rax
  UINT v219; // ebx
  size_t v220; // r9
  UINT *v221; // rcx
  const wchar_t *v222; // r10
  UINT v223; // r11d
  PVOID v224; // rax
  void *v225; // rsi
  UINT *v226; // rcx
  int v227; // r11d
  int v228; // r11d
  int *v229; // r9
  NTSTATUS v230; // eax
  UINT v231; // r9d
  UINT v232; // edx
  unsigned __int64 v233; // rax
  size_t v234; // rsi
  PVOID v235; // rax
  UINT v236; // ecx
  UINT v237; // r9d
  UINT v238; // r10d
  UINT v239; // eax
  UINT v240; // r11d
  UINT v241; // r11d
  UINT v242; // eax
  PVOID v243; // rax
  _DWORD *v244; // r9
  int v245; // r11d
  _DWORD *v246; // rax
  bool v247; // sf
  unsigned int v248; // r11d
  UINT v249; // ebx
  UINT *v250; // rcx
  _QWORD *v251; // r10
  UINT *v252; // rcx
  int v253; // ebx
  unsigned int v254; // r10d
  unsigned int v255; // ebx
  void *v256; // rax
  PVOID v257; // rax
  int v258; // ebx
  NTSTATUS v259; // eax
  UINT v260; // r9d
  int v261; // ecx
  UINT v262; // r10d
  NTSTATUS v263; // eax
  UINT v264; // r9d
  int v265; // r10d
  PVOID v266; // rax
  _DWORD *v267; // r9
  PVOID v268; // r10
  int v269; // ecx
  int *v270; // rax
  NTSTATUS v271; // eax
  UINT v272; // r9d
  int v273; // r10d
  PACL v274; // rcx
  unsigned int v275; // ebx
  unsigned int v276; // r10d
  int v277; // r11d
  unsigned int v278; // r11d
  PACL v279; // rax
  PVOID v280; // rax
  UINT *v281; // r10
  int v282; // ebx
  UINT v283; // edx
  NTSTATUS v284; // eax
  UINT v285; // r9d
  ULONGLONG v286; // r10
  unsigned int v287; // r11d
  _DWORD *v288; // r10
  _QWORD *v289; // rax
  const void *v290; // rbx
  __int64 v291; // r8
  const void *v292; // rbx
  void *v293; // r10
  UINT v294; // eax
  char *v295; // rax
  char *v296; // rbx
  unsigned int v297; // r9d
  ULONGLONG v298; // rcx
  void *v299; // rcx
  __int64 *v300; // rdi
  unsigned int v301; // ecx
  unsigned int v302; // edx
  __int64 v303; // rdi
  unsigned __int8 v304; // bl
  unsigned __int64 v305; // rcx
  void *v306; // rax
  UINT v307; // ecx
  unsigned __int8 *v308; // rdx
  unsigned int v309; // esi
  int v310; // edi
  UINT v311; // r9d
  int v312; // r8d
  char v313; // r11
  int v314; // eax
  __int64 v315; // rdx
  int v316; // r15d
  unsigned __int8 *v317; // r12
  unsigned __int8 *v318; // rax
  __int64 v319; // rbx
  __int64 v320; // rcx
  int v321; // eax
  __int64 v322; // rcx
  int v323; // eax
  __int64 v324; // r8
  unsigned int v325; // eax
  UINT v326; // ecx
  int v327; // edx
  _BYTE *v328; // r8
  char v329; // r9
  unsigned __int8 *v330; // r15
  UINT v331; // ebx
  unsigned int v332; // r13d
  ULONGLONG v333; // r8
  ULONGLONG v334; // r9
  __int64 v335; // rdx
  unsigned __int8 *v336; // rdi
  int v337; // ecx
  int v338; // r12d
  int v339; // r12d
  int v340; // esi
  unsigned __int8 *v341; // rax
  __int64 v342; // r14
  __int64 v343; // r13
  __int64 v344; // rcx
  int v345; // eax
  __int64 v346; // rcx
  int v347; // eax
  unsigned int v348; // esi
  int v349; // r13d
  int v350; // esi
  int v351; // r13d
  int v352; // esi
  int v353; // r13d
  int v354; // esi
  unsigned int v355; // r13d
  int v356; // esi
  int v357; // r13d
  _BYTE *v358; // r8
  int v359; // esi
  int v360; // r13d
  UINT v361; // esi
  int v362; // r13d
  int v363; // esi
  int v364; // r13d
  int v365; // esi
  int v366; // r13d
  int v367; // esi
  int v368; // r13d
  PVOID v369; // r12
  __int64 v370; // rdi
  PVOID v371; // rax
  PVOID v372; // rbx
  UINT v373; // edx
  UINT v374; // r9d
  void *v375; // r10
  void *v376; // rdi
  _DWORD *v377; // rcx
  _DWORD *v378; // rax
  void *v379; // rbx
  NTSTATUS v380; // eax
  ULONGLONG v381; // rcx
  NTSTATUS v382; // eax
  ULONGLONG v383; // rcx
  NTSTATUS v384; // eax
  unsigned __int8 *v385; // [rsp+50h] [rbp-B0h]
  void *v386; // [rsp+58h] [rbp-A8h]
  UINT *v387; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v388; // [rsp+68h] [rbp-98h]
  int NumberOfBytes; // [rsp+6Ch] [rbp-94h] BYREF
  UINT NumberOfBytes_4; // [rsp+70h] [rbp-90h] BYREF
  UINT Size[3]; // [rsp+74h] [rbp-8Ch] BYREF
  PVOID v392[2]; // [rsp+80h] [rbp-80h] BYREF
  PACL Dacl; // [rsp+90h] [rbp-70h] BYREF
  UINT v394; // [rsp+98h] [rbp-68h] BYREF
  PVOID v395[2]; // [rsp+A0h] [rbp-60h] BYREF
  ULONGLONG v396; // [rsp+B0h] [rbp-50h] BYREF
  size_t pcbLength; // [rsp+B8h] [rbp-48h] BYREF
  UINT uAugend; // [rsp+C0h] [rbp-40h] BYREF
  UINT v399; // [rsp+C4h] [rbp-3Ch] BYREF
  ULONGLONG v400; // [rsp+C8h] [rbp-38h] BYREF
  ULONGLONG i; // [rsp+D0h] [rbp-30h] BYREF
  UINT v402; // [rsp+D8h] [rbp-28h]
  ULONGLONG v403; // [rsp+E0h] [rbp-20h] BYREF
  UINT v404; // [rsp+E8h] [rbp-18h] BYREF
  ULONGLONG ullAugend; // [rsp+F0h] [rbp-10h] BYREF
  PVOID P; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v407; // [rsp+100h] [rbp+0h]
  UINT v408; // [rsp+108h] [rbp+8h] BYREF
  ULONGLONG pullResult; // [rsp+110h] [rbp+10h] BYREF
  unsigned int v410; // [rsp+118h] [rbp+18h]
  int v411; // [rsp+11Ch] [rbp+1Ch]
  UINT v412; // [rsp+120h] [rbp+20h] BYREF
  UINT v413; // [rsp+124h] [rbp+24h] BYREF
  UINT v414; // [rsp+128h] [rbp+28h] BYREF
  void *Src; // [rsp+130h] [rbp+30h]
  UINT v416; // [rsp+138h] [rbp+38h]
  UINT v417; // [rsp+13Ch] [rbp+3Ch] BYREF
  UINT v418; // [rsp+140h] [rbp+40h] BYREF
  UINT v419; // [rsp+144h] [rbp+44h] BYREF
  UINT v420; // [rsp+148h] [rbp+48h] BYREF
  UINT v421; // [rsp+14Ch] [rbp+4Ch] BYREF
  size_t v422; // [rsp+150h] [rbp+50h]
  UINT v423; // [rsp+158h] [rbp+58h]
  UINT v424; // [rsp+15Ch] [rbp+5Ch] BYREF
  UINT v425[2]; // [rsp+160h] [rbp+60h] BYREF
  PVOID v426; // [rsp+168h] [rbp+68h]
  unsigned int v427; // [rsp+170h] [rbp+70h]
  NTSTATUS AccessStatus; // [rsp+174h] [rbp+74h] BYREF
  NTSTATUS v429; // [rsp+178h] [rbp+78h] BYREF
  unsigned int v430; // [rsp+17Ch] [rbp+7Ch]
  UINT v431; // [rsp+180h] [rbp+80h] BYREF
  UINT v432; // [rsp+184h] [rbp+84h]
  UINT v433; // [rsp+188h] [rbp+88h] BYREF
  UINT v434; // [rsp+18Ch] [rbp+8Ch]
  UINT v435; // [rsp+190h] [rbp+90h]
  int v436; // [rsp+194h] [rbp+94h]
  unsigned int v437; // [rsp+198h] [rbp+98h]
  UINT v438; // [rsp+19Ch] [rbp+9Ch]
  const void **v439; // [rsp+1A0h] [rbp+A0h]
  UINT uAddend; // [rsp+1A8h] [rbp+A8h] BYREF
  int v441; // [rsp+1ACh] [rbp+ACh]
  UINT v442; // [rsp+1B0h] [rbp+B0h] BYREF
  UINT puResult; // [rsp+1B4h] [rbp+B4h] BYREF
  int v444; // [rsp+1B8h] [rbp+B8h] BYREF
  PVOID v445; // [rsp+1C0h] [rbp+C0h]
  int v446; // [rsp+1C8h] [rbp+C8h]
  ULONG v447; // [rsp+1D0h] [rbp+D0h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+1D4h] [rbp+D4h] BYREF
  UINT v449; // [rsp+1D8h] [rbp+D8h]
  UINT v450; // [rsp+1DCh] [rbp+DCh]
  ACCESS_MASK v451; // [rsp+1E0h] [rbp+E0h] BYREF
  ULONG v452; // [rsp+1E4h] [rbp+E4h] BYREF
  UINT v453; // [rsp+1E8h] [rbp+E8h]
  int v454; // [rsp+1F0h] [rbp+F0h]
  UINT v455; // [rsp+1F8h] [rbp+F8h]
  int v456; // [rsp+200h] [rbp+100h]
  int v457; // [rsp+208h] [rbp+108h]
  void *v458; // [rsp+210h] [rbp+110h]
  void *v459; // [rsp+218h] [rbp+118h]
  UINT v460; // [rsp+220h] [rbp+120h]
  PVOID v461; // [rsp+228h] [rbp+128h]
  ULONG ReturnLength; // [rsp+230h] [rbp+130h] BYREF
  int v463; // [rsp+238h] [rbp+138h]
  UINT v464; // [rsp+240h] [rbp+140h]
  wchar_t *v465; // [rsp+248h] [rbp+148h]
  void *v466; // [rsp+250h] [rbp+150h]
  _QWORD *v467; // [rsp+258h] [rbp+158h]
  unsigned int *v468; // [rsp+260h] [rbp+160h]
  __int64 v469; // [rsp+268h] [rbp+168h]
  __int64 v470; // [rsp+270h] [rbp+170h] BYREF
  unsigned __int64 v471; // [rsp+278h] [rbp+178h]
  __int64 v472; // [rsp+280h] [rbp+180h] BYREF
  __int64 SystemInformation; // [rsp+288h] [rbp+188h] BYREF
  int v474; // [rsp+290h] [rbp+190h]
  int v475; // [rsp+294h] [rbp+194h]
  int v476; // [rsp+298h] [rbp+198h]
  UINT v477; // [rsp+29Ch] [rbp+19Ch]
  int v478; // [rsp+2A0h] [rbp+1A0h]
  UINT v479; // [rsp+2A4h] [rbp+1A4h]
  int v480; // [rsp+2A8h] [rbp+1A8h]
  UINT v481; // [rsp+2ACh] [rbp+1ACh]
  int v482; // [rsp+2B0h] [rbp+1B0h]
  unsigned int *v483; // [rsp+2B8h] [rbp+1B8h]
  int *v484; // [rsp+2C0h] [rbp+1C0h]
  int *v485; // [rsp+2C8h] [rbp+1C8h]
  _QWORD *v486; // [rsp+2D0h] [rbp+1D0h]
  __int64 v487; // [rsp+2D8h] [rbp+1D8h]
  _QWORD *v488; // [rsp+2E0h] [rbp+1E0h]
  __int64 v489; // [rsp+2E8h] [rbp+1E8h]
  UINT v490; // [rsp+2F0h] [rbp+1F0h]
  int v491; // [rsp+2F4h] [rbp+1F4h]
  ULONGLONG v492[2]; // [rsp+2F8h] [rbp+1F8h] BYREF
  ULONGLONG v493[2]; // [rsp+308h] [rbp+208h] BYREF
  ULONGLONG v494[2]; // [rsp+318h] [rbp+218h] BYREF
  ULONGLONG v495[2]; // [rsp+328h] [rbp+228h] BYREF
  ULONGLONG v496[2]; // [rsp+338h] [rbp+238h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+348h] [rbp+248h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+368h] [rbp+268h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+388h] [rbp+288h] BYREF
  __int64 v500; // [rsp+3A8h] [rbp+2A8h]
  _OWORD v501[2]; // [rsp+3B0h] [rbp+2B0h] BYREF
  __int64 v502; // [rsp+3D0h] [rbp+2D0h]
  unsigned int *v503; // [rsp+3D8h] [rbp+2D8h]
  ULONGLONG v504; // [rsp+3E0h] [rbp+2E0h]
  __int64 v505; // [rsp+3E8h] [rbp+2E8h]
  __int64 v506; // [rsp+3F0h] [rbp+2F0h] BYREF
  __int64 v507; // [rsp+3F8h] [rbp+2F8h] BYREF

  v488 = a4;
  v410 = a3;
  v489 = a5;
  v387 = 0LL;
  v6 = 0LL;
  v416 = 0;
  v7 = 0LL;
  v385 = 0LL;
  v8 = 0LL;
  v402 = 0;
  v9 = 0LL;
  v471 = 0LL;
  v10 = 0LL;
  v439 = 0LL;
  v11 = 0LL;
  v386 = 0LL;
  v432 = 0;
  v427 = 0;
  v483 = 0LL;
  v449 = 0;
  *(_OWORD *)v395 = 0LL;
  *(_OWORD *)v392 = 0LL;
  if ( a2 < 4 )
    goto LABEL_2;
  v13 = *a1;
  v14 = a1 + 1;
  Src = a1 + 1;
  if ( a1 + 1 >= a1 )
  {
    if ( a2 - 4 < (unsigned int)v13 )
    {
LABEL_5:
      v7 = 0LL;
LABEL_2:
      Acl = -1073741762;
      v10 = 0LL;
      goto LABEL_173;
    }
    v15 = (unsigned int *)((char *)v14 + v13);
    pcbLength = (size_t)v14 + v13;
    if ( (unsigned int *)((char *)v14 + v13) >= v14 && (unsigned int)v13 < 0xFFFFFFFC )
    {
      if ( a2 - ((_DWORD)v13 + 4) < 4 )
        goto LABEL_5;
      v16 = *v15;
      v17 = v15 + 1;
      if ( v15 + 1 >= v15 )
      {
        v18 = v13 + 8;
        if ( (int)v13 + 8 >= (unsigned int)(v13 + 4) )
        {
          if ( a2 - v18 < (unsigned int)v16 )
          {
LABEL_12:
            v7 = 0LL;
            v8 = 0LL;
            goto LABEL_2;
          }
          v19 = (unsigned int *)((char *)v17 + v16);
          if ( (unsigned int *)((char *)v17 + v16) >= v17 )
          {
            v20 = v16 + v18;
            if ( (unsigned int)v16 + v18 >= v18 )
            {
              if ( a2 - v20 < 4 )
                goto LABEL_12;
              v21 = *v19;
              NumberOfBytes = *v19;
              *(_QWORD *)&Size[1] = v19 + 1;
              if ( v19 + 1 >= v19 )
              {
                v22 = v20 + 4;
                if ( v20 + 4 >= v20 )
                {
                  if ( a2 - v22 < v21 )
                    goto LABEL_12;
                  if ( v21 + v22 >= v22 )
                  {
                    if ( a2 != v21 + v22 || (_DWORD)v16 + (_DWORD)v13 + v21 + 12LL != a2 )
                      goto LABEL_12;
                    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20534C53u);
                    v24 = PoolWithTag;
                    if ( !PoolWithTag )
                    {
                      Acl = -1073741801;
                      goto LABEL_24;
                    }
                    *(_OWORD *)PoolWithTag = 0LL;
                    *((_OWORD *)PoolWithTag + 1) = 0LL;
                    *((_OWORD *)PoolWithTag + 2) = 0LL;
                    v30 = Src;
                    Acl = 0;
                    if ( Src )
                    {
                      *v24 = v13;
                      if ( (_DWORD)v13 )
                      {
                        v31 = ExAllocatePoolWithTag(PagedPool, v13, 0x20534C53u);
                        if ( v31 )
                          *((_QWORD *)v24 + 1) = v31;
                        else
                          Acl = -1073741801;
                        v30 = Src;
                      }
                      else
                      {
                        Acl = -1073741762;
                      }
                      if ( Acl < 0 )
                        goto LABEL_59;
                      memmove(*((void **)v24 + 1), v30, v13);
                    }
                    v32 = (const void *)(pcbLength + 4);
                    if ( pcbLength == -4LL )
                    {
                      v24[4] = 0;
                      *((_QWORD *)v24 + 3) = 0LL;
                    }
                    else
                    {
                      v24[4] = v16;
                      if ( !(_DWORD)v16 )
                      {
LABEL_48:
                        Acl = -1073741762;
                        goto LABEL_59;
                      }
                      v33 = ExAllocatePoolWithTag(PagedPool, v16, 0x20534C53u);
                      if ( !v33 )
                        goto LABEL_50;
                      *((_QWORD *)v24 + 3) = v33;
                      Acl = 0;
                      memmove(v33, v32, v16);
                    }
                    v34 = *(const void **)&Size[1];
                    if ( *(_QWORD *)&Size[1] )
                    {
                      v35 = NumberOfBytes;
                      v24[8] = NumberOfBytes;
                      if ( !v35 )
                        goto LABEL_48;
                      v36 = v35;
                      v37 = ExAllocatePoolWithTag(PagedPool, v35, 0x20534C53u);
                      if ( !v37 )
                      {
LABEL_50:
                        Acl = -1073741801;
                        goto LABEL_59;
                      }
                      *((_QWORD *)v24 + 5) = v37;
                      Acl = 0;
                      memmove(v37, v34, v36);
                    }
                    else
                    {
                      v24[8] = 0;
                      *((_QWORD *)v24 + 5) = 0LL;
                    }
                    v11 = v24;
                    v24 = 0LL;
LABEL_59:
                    if ( v24 )
                    {
                      v38 = (void *)*((_QWORD *)v24 + 1);
                      if ( v38 )
                      {
                        ExFreePoolWithTag(v38, 0x20534C53u);
                        *((_QWORD *)v24 + 1) = 0LL;
                      }
                      v39 = (void *)*((_QWORD *)v24 + 3);
                      if ( v39 )
                      {
                        ExFreePoolWithTag(v39, 0x20534C53u);
                        *((_QWORD *)v24 + 3) = 0LL;
                      }
                      v40 = (void *)*((_QWORD *)v24 + 5);
                      if ( v40 )
                      {
                        ExFreePoolWithTag(v40, 0x20534C53u);
                        *((_QWORD *)v24 + 5) = 0LL;
                      }
                      ExFreePoolWithTag(v24, 0x20534C53u);
                    }
LABEL_24:
                    v25 = 0LL;
                    if ( Acl < 0 )
                    {
                      v25 = v11;
                      v11 = 0LL;
                    }
                    Src = v11;
                    if ( v25 )
                    {
                      v26 = (void *)v25[1];
                      if ( v26 )
                      {
                        ExFreePoolWithTag(v26, 0x20534C53u);
                        v25[1] = 0LL;
                      }
                      v27 = (void *)v25[3];
                      if ( v27 )
                      {
                        ExFreePoolWithTag(v27, 0x20534C53u);
                        v25[3] = 0LL;
                      }
                      v28 = (void *)v25[5];
                      if ( v28 )
                      {
                        ExFreePoolWithTag(v28, 0x20534C53u);
                        v25[5] = 0LL;
                      }
                      ExFreePoolWithTag(v25, 0x20534C53u);
                    }
                    v6 = v11;
                    if ( Acl < 0 )
                      goto LABEL_171;
                    v413 = 0;
                    v29 = 0LL;
                    v426 = 0LL;
                    Acl = 0;
                    if ( v11 )
                    {
                      pullResult = *((_QWORD *)v11 + 1);
                      if ( pullResult )
                      {
                        v41 = *v11;
                        if ( (_DWORD)v41 )
                        {
                          v42 = (__int64 *)*((_QWORD *)v11 + 5);
                          if ( v42 )
                          {
                            v43 = v11[8];
                            if ( v43 )
                            {
                              v396 = *((_QWORD *)v11 + 3);
                              if ( v396 )
                              {
                                v44 = v11[4];
                                if ( v44 )
                                {
                                  *(_QWORD *)v425 = v41;
                                  v412 = 0;
                                  v407 = 0xFFFFFFFFLL;
                                  if ( v43 != 8 || v44 != 160 || v41 <= 8 )
                                    goto LABEL_127;
                                  v45 = *v42;
                                  v46 = v41 - 8;
                                  ullAugend = v41 - 8;
                                  v47 = 0;
                                  v48 = (ACL *)ExAllocatePoolWithTag(PagedPool, v41 - 8, 0x20534C53u);
                                  v49 = 0;
                                  P = v48;
                                  if ( !v48 )
                                  {
                                    v29 = (UINT *)v426;
                                    goto LABEL_127;
                                  }
                                  v50 = (unsigned __int8 *)pullResult;
                                  v51 = v48;
                                  Dacl = v48;
                                  v52 = (v46 & 7) == 0;
                                  v53 = v46 & 7;
                                  v506 = v45;
                                  pcbLength = v46 & 7;
                                  v54 = 0;
                                  v400 = pullResult;
                                  NumberOfBytes_4 = 0;
                                  if ( v52 )
                                  {
                                    Size[0] = 0;
                                    v394 = -1;
                                  }
                                  else
                                  {
                                    v394 = 0;
                                    v55 = -1;
                                    v56 = 0;
                                    if ( v53 )
                                    {
                                      v57 = 56;
                                      do
                                      {
                                        v58 = *v50++;
                                        if ( v49 >= 4 )
                                          v56 |= v58 << v57;
                                        else
                                          NumberOfBytes_4 |= v58 << (v57 - 32);
                                        ++v49;
                                        v57 -= 8;
                                      }
                                      while ( v49 < v53 );
                                      v394 = v56;
                                      v400 = (ULONGLONG)v50;
                                    }
                                    v59 = 30LL;
                                    v60 = (unsigned __int8 *)(v396 + 126);
                                    v61 = (unsigned __int8 *)(v396 + 158);
                                    v62 = 16LL;
                                    *(_QWORD *)&Size[1] = v396 + 158;
                                    v403 = 16LL;
                                    do
                                    {
                                      v63 = v61[1];
                                      if ( (unsigned __int8)v63 < 0x1Fu )
                                      {
                                        v64 = funcs_140689BDF[v63](
                                                v59 + 1,
                                                *(v60 - 2),
                                                *(v60 - 1),
                                                *v60,
                                                v60[1],
                                                (__int64)&v506,
                                                v54);
                                        v62 = v403;
                                        v55 ^= v64;
                                        v61 = *(unsigned __int8 **)&Size[1];
                                      }
                                      v65 = *v61;
                                      if ( (unsigned __int8)v65 < 0x1Fu )
                                      {
                                        v66 = funcs_140689BDF[v65](
                                                v59,
                                                *(v60 - 6),
                                                *(v60 - 5),
                                                *(v60 - 4),
                                                *(v60 - 3),
                                                (__int64)&v506,
                                                v55);
                                        v62 = v403;
                                        v54 ^= v66;
                                        v61 = *(unsigned __int8 **)&Size[1];
                                      }
                                      v61 -= 2;
                                      v59 -= 2LL;
                                      v60 -= 8;
                                      *(_QWORD *)&Size[1] = v61;
                                      v403 = --v62;
                                    }
                                    while ( v62 );
                                    v54 ^= NumberOfBytes_4;
                                    v67 = v394 ^ v55;
                                    v68 = 0;
                                    v69 = pcbLength;
                                    v9 = 0LL;
                                    v11 = (unsigned int *)Src;
                                    v70 = v54;
                                    v71 = v67;
                                    v47 = 0;
                                    if ( (_DWORD)pcbLength )
                                    {
                                      v72 = Dacl;
                                      do
                                      {
                                        p_Sbz1 = (ACL *)&v72->Sbz1;
                                        if ( v68 >= 4 )
                                        {
                                          v71 = __ROL4__(v71, 8);
                                          v74 = v71;
                                        }
                                        else
                                        {
                                          v70 = __ROL4__(v70, 8);
                                          v74 = v70;
                                        }
                                        ++v68;
                                        v72->AclRevision = v74;
                                        v72 = (PACL)((char *)v72 + 1);
                                      }
                                      while ( v68 < (int)v69 );
                                      v51 = p_Sbz1;
                                      Dacl = p_Sbz1;
                                    }
                                    else
                                    {
                                      v51 = Dacl;
                                    }
                                    v50 = (unsigned __int8 *)v400;
                                    if ( v69 <= 4 )
                                    {
                                      LODWORD(v45) = v506;
                                      Size[0] = 0;
                                      if ( v69 >= 4 )
                                        goto LABEL_106;
                                      v54 = v54 >> (8 * (4 - v69)) << (8 * (4 - v69));
                                    }
                                    else
                                    {
                                      Size[0] = v67 >> (8 * (8 - v69)) << (8 * (8 - v69));
                                      LODWORD(v45) = v506;
                                    }
                                    v51 = Dacl;
                                  }
LABEL_106:
                                  v400 = ullAugend >> 3;
                                  if ( ullAugend >> 3 )
                                  {
                                    v75 = v50 + 2;
                                    v76 = Size[0];
                                    v77 = v394;
                                    v78 = NumberOfBytes_4;
                                    v79 = v396 + 158;
                                    pcbLength = v396 + 126;
                                    v396 = (ULONGLONG)&v51->Sbz2 + 1;
                                    for ( i = v79; ; v79 = i )
                                    {
                                      v80 = v75[2] << 8;
                                      v81 = (unsigned __int16)v45;
                                      v82 = v75[3];
                                      v83 = (v75[1] | ((*v75 | ((*(v75 - 1) | (*(v75 - 2) << 8)) << 8)) << 8)) ^ v54;
                                      NumberOfBytes = v75[1] | ((*v75 | ((*(v75 - 1) | (*(v75 - 2) << 8)) << 8)) << 8);
                                      v84 = v75[5] | ((v75[4] | ((v82 | v80) << 8)) << 8);
                                      v403 = (ULONGLONG)(v75 + 8);
                                      v414 = v84;
                                      v85 = v45 ^ HIDWORD(v506) ^ v83 ^ v84 ^ v76;
                                      v86 = (v85 >> 8) ^ (WORD2(v506) * (WORD1(v506) ^ v85)) ^ v83;
                                      v87 = (WORD1(v506) * __ROR4__(HIDWORD(v506) - v86, 11) - __ROR4__(v86, 12)) ^ v85;
                                      v88 = ((unsigned __int16)v45 * __ROL4__(HIDWORD(v506) ^ v87, 8) - __ROL4__(v87, 2)) ^ v86;
                                      v89 = __ROR4__(v88, 9) ^ (HIWORD(v506) * __ROR4__(v88 - v45, 4)) ^ v87;
                                      v90 = (__ROR4__(v89, 4) + WORD2(v506) * __ROR4__(v45 - v89, 10)) ^ v88;
                                      v91 = (WORD1(v506) * __ROL4__(HIWORD(v506) ^ v90, 4) - __ROR4__(v90, 16)) ^ v89;
                                      v92 = 30LL;
                                      v93 = ((unsigned __int16)v45 * (WORD1(v506) ^ v91) - __ROR4__(v91, 7)) ^ v90;
                                      v94 = 16LL;
                                      Dacl = (PACL)16;
                                      v95 = (v93 - HIWORD(v506) - v45) ^ v91;
                                      v96 = __ROR4__(v95, 11) ^ (WORD2(v506) * __ROR4__(v45 - v95, 9)) ^ v93;
                                      v97 = (unsigned __int8 *)pcbLength;
                                      v98 = (WORD1(v506) * (v96 - WORD2(v506)) - (v96 >> 13)) ^ v95;
                                      v99 = (unsigned __int8 *)v79;
                                      *(_QWORD *)&Size[1] = v79;
                                      v100 = (v98 >> 15) ^ (v81 * __ROL4__(v98 - WORD2(v506), 3)) ^ v96;
                                      do
                                      {
                                        v101 = v99[1];
                                        if ( (unsigned __int8)v101 < 0x1Fu )
                                        {
                                          v102 = funcs_140689BDF[v101](
                                                   v92 + 1,
                                                   *(v97 - 2),
                                                   *(v97 - 1),
                                                   *v97,
                                                   v97[1],
                                                   (__int64)&v506,
                                                   v100);
                                          v94 = (__int64)Dacl;
                                          v98 ^= v102;
                                          v99 = *(unsigned __int8 **)&Size[1];
                                        }
                                        v103 = *v99;
                                        if ( (unsigned __int8)v103 < 0x1Fu )
                                        {
                                          v104 = funcs_140689BDF[v103](
                                                   v92,
                                                   *(v97 - 6),
                                                   *(v97 - 5),
                                                   *(v97 - 4),
                                                   *(v97 - 3),
                                                   (__int64)&v506,
                                                   v98);
                                          v94 = (__int64)Dacl;
                                          v100 ^= v104;
                                          v99 = *(unsigned __int8 **)&Size[1];
                                        }
                                        v99 -= 2;
                                        v92 -= 2LL;
                                        v97 -= 8;
                                        *(_QWORD *)&Size[1] = v99;
                                        Dacl = (PACL)--v94;
                                      }
                                      while ( v94 );
                                      v105 = (_BYTE *)v396;
                                      v106 = v78 ^ v100;
                                      v75 = (unsigned __int8 *)v403;
                                      v107 = v77 ^ v98;
                                      v78 = NumberOfBytes;
                                      v77 = v414;
                                      *(_BYTE *)(v396 - 4) = v106;
                                      *v105 = v107;
                                      v108 = __ROR4__(v106, 8);
                                      *(v105 - 5) = v108;
                                      v109 = __ROR4__(v107, 8);
                                      *(v105 - 1) = v109;
                                      v110 = __ROR4__(v108, 8);
                                      *(v105 - 6) = v110;
                                      v111 = __ROR4__(v109, 8);
                                      *(v105 - 2) = v111;
                                      v112 = __ROR4__(v110, 8);
                                      v113 = __ROR4__(v111, 8);
                                      *(v105 - 7) = v112;
                                      *(v105 - 3) = v113;
                                      v76 = __ROR4__(v113, 8);
                                      v54 = __ROR4__(v112, 8);
                                      v52 = v400-- == 1;
                                      v396 = (ULONGLONG)(v105 + 8);
                                      if ( v52 )
                                        break;
                                      LODWORD(v45) = v506;
                                    }
                                    v47 = 0;
                                    Acl = v413;
                                    v11 = (unsigned int *)Src;
                                    v9 = v439;
                                  }
                                  v114 = 0LL;
                                  for ( j = P; v114 < ullAugend; ++v114 )
                                    v47 ^= *((_BYTE *)P + v114);
                                  if ( v47 == *(_QWORD *)(ullAugend + pullResult) )
                                  {
                                    v29 = (UINT *)P;
                                    v117 = ullAugend;
                                    v116 = v412;
                                    j = 0LL;
                                    v426 = P;
                                  }
                                  else
                                  {
                                    v29 = (UINT *)v426;
                                    v116 = -1073425151;
                                    v117 = v425[0];
                                  }
                                  if ( j )
                                  {
                                    ExFreePoolWithTag(j, 0x20534C53u);
                                    v29 = (UINT *)v426;
                                  }
                                  if ( v116 >= 0 )
                                  {
                                    v7 = v29;
                                    v387 = v29;
                                    v29 = 0LL;
                                    v416 = v117;
                                    v426 = 0LL;
                                    goto LABEL_128;
                                  }
LABEL_127:
                                  v117 = v416;
                                  Acl = -1073741823;
                                  v7 = 0LL;
LABEL_128:
                                  if ( v29 )
                                  {
                                    ExFreePoolWithTag(v29, 0x20534C53u);
                                    v117 = v416;
                                    v426 = 0LL;
                                  }
                                  v6 = v11;
                                  if ( Acl < 0 )
                                    goto LABEL_171;
                                  if ( v117 < 4 )
                                    goto LABEL_132;
                                  v118 = *v7;
                                  NumberOfBytes_4 = *v7;
                                  if ( v7 + 1 < v7 )
                                  {
                                    Acl = -1073741675;
                                    goto LABEL_172;
                                  }
                                  if ( v117 - 4 < 4 )
                                  {
LABEL_132:
                                    Acl = -1073741762;
LABEL_172:
                                    v8 = 0LL;
                                    v10 = 0LL;
                                    goto LABEL_173;
                                  }
                                  v119 = v7[1];
                                  v120 = (char *)(v7 + 2);
                                  if ( v7 + 2 < v7 + 1 )
                                    goto LABEL_140;
                                  if ( v117 - 8 < (unsigned int)v119 )
                                  {
                                    Acl = -1073741762;
LABEL_138:
                                    v6 = v11;
                                    goto LABEL_172;
                                  }
                                  if ( (unsigned int)v119 >= 0xFFFFFFF8 )
                                  {
LABEL_140:
                                    Acl = -1073741675;
                                    goto LABEL_138;
                                  }
                                  v121 = (unsigned __int64)&v120[v119];
                                  v122 = v7[1];
                                  if ( (char *)v7 + v117 < &v120[v119]
                                    || (unsigned __int64)v387 + v117 - v119 - (_QWORD)v120 >= 8 )
                                  {
                                    Acl = -1073741762;
                                    goto LABEL_201;
                                  }
                                  memset(Size, 0, sizeof(Size));
                                  v123 = 0LL;
                                  v124 = 0;
                                  if ( v7 != (UINT *)-8LL )
                                  {
                                    v125 = (char *)(v7 + 2);
                                    if ( v121 < (unsigned __int64)v120 )
                                    {
                                      Acl = -1073741675;
                                      goto LABEL_201;
                                    }
                                    if ( v121 > (unsigned __int64)v120 )
                                    {
                                      while ( 1 )
                                      {
                                        if ( v125 + 4 < v125 )
                                        {
LABEL_157:
                                          Acl = -1073741675;
                                          goto LABEL_201;
                                        }
                                        if ( (unsigned __int64)(v125 + 4) > v121 )
                                          goto LABEL_156;
                                        v126 = *(_DWORD *)v125 + 4;
                                        if ( *(_DWORD *)v125 >= 0xFFFFFFFC )
                                          break;
                                        v475 = *(_DWORD *)v125 + 4;
                                        v127 = &v125[v126];
                                        if ( v127 < v125 )
                                          goto LABEL_157;
                                        v125 += v126;
                                        if ( (unsigned __int64)v127 > v121 )
                                        {
LABEL_156:
                                          Acl = -1073741811;
                                          goto LABEL_201;
                                        }
                                        Size[0] = ++v124;
                                        if ( (unsigned __int64)v127 >= v121 )
                                        {
                                          v123 = *(PVOID *)&Size[1];
                                          goto LABEL_153;
                                        }
                                      }
                                      Acl = -1073741675;
LABEL_167:
                                      if ( Acl >= 0 && v118 != LODWORD(v395[0]) )
                                      {
                                        Acl = -1073741762;
                                        goto LABEL_170;
                                      }
LABEL_201:
                                      v6 = v11;
                                      if ( Acl < 0 )
                                      {
LABEL_171:
                                        v7 = v387;
                                        goto LABEL_172;
                                      }
                                      if ( v395[1] && LODWORD(v395[0]) )
                                      {
                                        v135 = *(_DWORD *)v395[1];
                                        if ( (char *)v395[1] + 4 < v395[1] )
                                        {
                                          Acl = -1073741675;
                                        }
                                        else
                                        {
                                          v476 = *(_DWORD *)v395[1];
                                          v136 = 0LL;
                                          if ( v135 )
                                            v136 = (unsigned int *)((char *)v395[1] + 4);
                                          v503 = v136;
                                          Acl = 0;
                                          if ( v135 != 4 )
                                          {
                                            Acl = -1073741789;
                                            goto LABEL_171;
                                          }
                                          v427 = *v136;
                                        }
                                      }
                                      else
                                      {
                                        Acl = -1073741811;
                                      }
                                      if ( Acl < 0 )
                                        goto LABEL_171;
                                      if ( !v395[1] || LODWORD(v395[0]) <= 1 )
                                        goto LABEL_214;
                                      v137 = (UINT *)v395[1];
                                      v138 = 0;
                                      do
                                      {
                                        v139 = *v137;
                                        v140 = v137 + 1;
                                        if ( v137 + 1 < v137 )
                                          goto LABEL_780;
                                        v137 = (unsigned int *)((char *)v140 + v139);
                                        if ( (unsigned int *)((char *)v140 + v139) < v140 )
                                          goto LABEL_780;
                                        ++v138;
                                      }
                                      while ( !v138 );
                                      v141 = *v137;
                                      v142 = v137 + 1;
                                      Size[0] = *v137;
                                      if ( v137 + 1 < v137 )
                                      {
LABEL_780:
                                        Acl = -1073741675;
                                        goto LABEL_171;
                                      }
                                      v449 = v141;
                                      v143 = 0LL;
                                      if ( v141 )
                                        v143 = v142;
                                      *(_QWORD *)&Size[1] = v143;
                                      v483 = v143;
                                      if ( LODWORD(v395[0]) <= 2 )
                                      {
LABEL_214:
                                        Acl = -1073741811;
                                        goto LABEL_171;
                                      }
                                      v144 = (UINT *)v395[1];
                                      for ( k = 0; k < 2; ++k )
                                      {
                                        v146 = *v144;
                                        v147 = v144 + 1;
                                        if ( v144 + 1 < v144 )
                                          goto LABEL_780;
                                        v144 = (unsigned int *)((char *)v147 + v146);
                                        if ( (unsigned int *)((char *)v147 + v146) < v147 )
                                          goto LABEL_780;
                                      }
                                      v148 = *v144;
                                      v149 = v144 + 1;
                                      NumberOfBytes = *v144;
                                      if ( v144 + 1 < v144 )
                                        goto LABEL_780;
                                      v477 = v148;
                                      v150 = 0LL;
                                      if ( v148 )
                                        v150 = (ULONGLONG)v149;
                                      v396 = v150;
                                      v504 = v150;
                                      v151 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20534C53u);
                                      v155 = v151;
                                      if ( !v151 )
                                      {
                                        Acl = -1073741801;
                                        goto LABEL_258;
                                      }
                                      *(_OWORD *)v151 = 0LL;
                                      *((_OWORD *)v151 + 1) = 0LL;
                                      *((_OWORD *)v151 + 2) = 0LL;
                                      Acl = 0;
                                      v153 = *(_QWORD *)&Size[1];
                                      if ( *(_QWORD *)&Size[1] )
                                      {
                                        v156 = Size[0];
                                        v155[4] = Size[0];
                                        if ( (_DWORD)v156 )
                                        {
                                          v157 = ExAllocatePoolWithTag(PagedPool, v156, 0x20534C53u);
                                          v153 = *(_QWORD *)&Size[1];
                                          if ( v157 )
                                            *((_QWORD *)v155 + 3) = v157;
                                          else
                                            Acl = -1073741801;
                                          LODWORD(v156) = Size[0];
                                        }
                                        else
                                        {
                                          Acl = -1073741762;
                                        }
                                        v154 = (unsigned int)v156;
                                        if ( Acl < 0 )
                                          goto LABEL_250;
                                        memmove(*((void **)v155 + 3), (const void *)v153, (unsigned int)v156);
                                      }
                                      if ( v396 )
                                      {
                                        v158 = (unsigned int)NumberOfBytes;
                                        v155[8] = NumberOfBytes;
                                        if ( !(_DWORD)v158 )
                                        {
                                          Acl = -1073741762;
                                          goto LABEL_250;
                                        }
                                        pcbLength = v158;
                                        v159 = ExAllocatePoolWithTag(PagedPool, v158, 0x20534C53u);
                                        if ( !v159 )
                                        {
                                          Acl = -1073741801;
                                          goto LABEL_250;
                                        }
                                        *((_QWORD *)v155 + 5) = v159;
                                        Acl = 0;
                                        memmove(v159, (const void *)v396, pcbLength);
                                      }
                                      else
                                      {
                                        v155[8] = 0;
                                        *((_QWORD *)v155 + 5) = 0LL;
                                      }
                                      v9 = (const void **)v155;
                                      v439 = (const void **)v155;
                                      v155 = 0LL;
LABEL_250:
                                      if ( v155 )
                                      {
                                        v160 = (void *)*((_QWORD *)v155 + 1);
                                        if ( v160 )
                                        {
                                          ExFreePoolWithTag(v160, 0x20534C53u);
                                          *((_QWORD *)v155 + 1) = 0LL;
                                        }
                                        v161 = (void *)*((_QWORD *)v155 + 3);
                                        if ( v161 )
                                        {
                                          ExFreePoolWithTag(v161, 0x20534C53u);
                                          *((_QWORD *)v155 + 3) = 0LL;
                                        }
                                        v162 = (void *)*((_QWORD *)v155 + 5);
                                        if ( v162 )
                                        {
                                          ExFreePoolWithTag(v162, 0x20534C53u);
                                          *((_QWORD *)v155 + 5) = 0LL;
                                        }
                                        ExFreePoolWithTag(v155, 0x20534C53u);
                                      }
LABEL_258:
                                      v6 = v11;
                                      if ( Acl < 0 )
                                        goto LABEL_171;
                                      if ( v427 > 0x68 )
                                      {
                                        v153 = 204LL;
                                        if ( v427 <= 0xCC )
                                        {
                                          switch ( v427 )
                                          {
                                            case 0xCCu:
                                              IsAppLicensed = sub_140965AD8(v395, v9, v154, v392);
                                              goto LABEL_678;
                                            case 0x69u:
                                              IsAppLicensed = sub_140964338(v395, v9, v154, v392);
                                              goto LABEL_678;
                                            case 0x6Au:
                                              IsAppLicensed = sub_140963AD0(v395, v9, v154, v392);
                                              goto LABEL_678;
                                            case 0x6Bu:
                                              IsAppLicensed = sub_1405BE2C0(
                                                                (__int64)v395,
                                                                (__int64)v9,
                                                                v154,
                                                                (__int64)v392);
                                              goto LABEL_678;
                                            case 0x6Du:
                                              IsAppLicensed = SPCallServerHandleIsAppLicensed(
                                                                (__int64)v395,
                                                                (__int64)v9,
                                                                v154,
                                                                (__int64)v392);
                                              goto LABEL_678;
                                            case 0x6Eu:
                                              IsAppLicensed = sub_1409636D4(v395, v9, v154, v392);
                                              goto LABEL_678;
                                            case 0x6Fu:
                                              IsAppLicensed = sub_14096240C(v395, v9, v154, v392);
                                              goto LABEL_678;
                                            case 0x70u:
                                              IsAppLicensed = sub_14096266C(v395, v9, v154, v392);
                                              goto LABEL_678;
                                            case 0x71u:
                                              IsAppLicensed = SPCallServerHandleClepKdf(v395, v9, v154, v392);
                                              goto LABEL_678;
                                          }
                                          goto LABEL_557;
                                        }
                                        switch ( v427 )
                                        {
                                          case 0xCDu:
                                            IsAppLicensed = SPCallServerHandleCheckLicense(v395, v9, v154, v392);
                                            goto LABEL_678;
                                          case 0xCEu:
                                            v447 = 0;
                                            v470 = 8LL;
                                            ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v470, 8u, &v447);
                                            if ( v11[4] == 160 )
                                            {
                                              if ( (v290 = (const void *)*((_QWORD *)v11 + 3),
                                                    !memcmp(qword_140989F00, v290, 0xA0uLL))
                                                && *((_DWORD *)v9 + 4) == 160
                                                && !memcmp(qword_14098A360, v9[3], 0xA0uLL)
                                                && v11[8] == 8
                                                && **((_QWORD **)v11 + 5) == 0x5638EBB72F3355A5LL
                                                && *((_DWORD *)v9 + 8) == 8
                                                && *(_QWORD *)v9[5] == 0x9F2DD8784FE939B7uLL
                                                || !memcmp(qword_14098A180, v290, 0xA0uLL)
                                                && *((_DWORD *)v9 + 4) == 160
                                                && !memcmp(qword_14098A2C0, v9[3], 0xA0uLL)
                                                && v11[8] == 8
                                                && **((_QWORD **)v11 + 5) == 0x5638EBB72F3355A5LL
                                                && *((_DWORD *)v9 + 8) == 8
                                                && *(_QWORD *)v9[5] == 0x9F2DD8784FE939B7uLL
                                                || (v292 = (const void *)*((_QWORD *)v11 + 3),
                                                    !memcmp(qword_140989B40, v292, 0xA0uLL))
                                                && *((_DWORD *)v9 + 4) == 160
                                                && !memcmp(qword_140989DC0, v9[3], 0xA0uLL)
                                                && v11[8] == 8
                                                && **((_QWORD **)v11 + 5) == 0xF10D668DB2BB8BB9uLL
                                                && *((_DWORD *)v9 + 8) == 8
                                                && *(_QWORD *)v9[5] == 0x768DFD321621EA95LL
                                                || !memcmp(qword_1409898C0, v292, 0xA0uLL)
                                                && *((_DWORD *)v9 + 4) == 160
                                                && !memcmp(qword_140989AA0, v9[3], 0xA0uLL)
                                                && v11[8] == 8
                                                && **((_QWORD **)v11 + 5) == 0xF10D668DB2BB8BB9uLL
                                                && *((_DWORD *)v9 + 8) == 8
                                                && *(_QWORD *)v9[5] == 0x768DFD321621EA95LL )
                                              {
                                                IsAppLicensed = sub_1405BE89C(
                                                                  (__int64)v395,
                                                                  (__int64)v9,
                                                                  v291,
                                                                  (__int64)v392);
                                                v6 = v11;
                                                goto LABEL_678;
                                              }
                                            }
                                            goto LABEL_308;
                                          case 0xCFu:
                                            IsAppLicensed = sub_140963040(v395, v9, v154, v392);
                                            goto LABEL_678;
                                          case 0xD0u:
                                            IsAppLicensed = SPCallServerHandleGetAppPolicyValue(
                                                              (__int64)v395,
                                                              (__int64)v9,
                                                              v154,
                                                              (__int64)v392);
                                            goto LABEL_678;
                                          case 0xD1u:
                                            IsAppLicensed = sub_140965070(v395, v9, v154, v392);
                                            goto LABEL_678;
                                          case 0xD2u:
                                            IsAppLicensed = sub_140961BF0(v395, v9, v154, v392);
                                            goto LABEL_678;
                                          case 0xD3u:
                                            IsAppLicensed = sub_1409617F4(v395, v9, v154, v392);
                                            goto LABEL_678;
                                        }
                                        if ( v427 != 212 )
                                          goto LABEL_557;
                                        v248 = (unsigned int)v395[0];
                                        v469 = 0LL;
                                        v249 = 0;
                                        v411 = 0;
                                        v423 = 0;
                                        v468 = 0LL;
                                        v467 = 0LL;
                                        v486 = 0LL;
                                        v464 = 0;
                                        if ( v395[1] && LODWORD(v395[0]) > 3 )
                                        {
                                          v250 = (UINT *)v395[1];
                                          v403 = (ULONGLONG)v395[1];
                                          v425[0] = 0;
                                          while ( 1 )
                                          {
                                            NumberOfBytes = *v250;
                                            Acl = RtlULongLongAdd((ULONGLONG)v250, 4uLL, &v403);
                                            if ( Acl < 0 )
                                              break;
                                            Acl = RtlULongLongAdd(v403, (unsigned int)NumberOfBytes, &v403);
                                            if ( Acl < 0 )
                                              break;
                                            v250 = (UINT *)v403;
                                            if ( ++v425[0] >= 3 )
                                            {
                                              NumberOfBytes = *(_DWORD *)v403;
                                              Acl = RtlULongLongAdd(v403, 4uLL, &v403);
                                              if ( Acl >= 0 )
                                              {
                                                v249 = NumberOfBytes;
                                                v251 = (_QWORD *)v403;
                                                v464 = NumberOfBytes;
                                                if ( !NumberOfBytes )
                                                  v251 = 0LL;
                                                v486 = v251;
                                              }
                                              break;
                                            }
                                          }
                                          if ( Acl >= 0 )
                                          {
                                            if ( v249 != 8 )
                                              goto LABEL_384;
                                            v469 = *v251;
                                          }
                                        }
                                        else
                                        {
                                          Acl = -1073741811;
                                        }
                                        if ( Acl >= 0 )
                                        {
                                          v458 = 0LL;
                                          LODWORD(v422) = 0;
                                          if ( v395[1] && v248 > 4 )
                                          {
                                            v252 = (UINT *)v395[1];
                                            v253 = 0;
                                            v400 = (ULONGLONG)v395[1];
                                            while ( 1 )
                                            {
                                              NumberOfBytes = *v252;
                                              Acl = RtlULongLongAdd((ULONGLONG)v252, 4uLL, &v400);
                                              if ( Acl < 0 )
                                                break;
                                              Acl = RtlULongLongAdd(v400, (unsigned int)NumberOfBytes, &v400);
                                              if ( Acl < 0 )
                                                break;
                                              v252 = (UINT *)v400;
                                              if ( (unsigned int)++v253 >= 4 )
                                              {
                                                v255 = *(_DWORD *)v400;
                                                Acl = RtlULongLongAdd(v400, 4uLL, &v400);
                                                if ( Acl >= 0 )
                                                {
                                                  v256 = (void *)v400;
                                                  v254 = v255;
                                                  LODWORD(v422) = v255;
                                                  if ( !v255 )
                                                    v256 = 0LL;
                                                  v458 = v256;
                                                }
                                                break;
                                              }
                                            }
                                            if ( Acl >= 0 )
                                            {
                                              if ( v254 )
                                              {
                                                v257 = ExAllocatePoolWithTag(PagedPool, v254, 0x20534C53u);
                                                if ( v257 )
                                                {
                                                  memmove(v257, v458, (unsigned int)v422);
                                                  v468 = (unsigned int *)v458;
                                                  v411 = v422;
                                                  if ( (_DWORD)v422 != 4 )
                                                  {
LABEL_590:
                                                    Acl = -1073741306;
LABEL_170:
                                                    v6 = v11;
                                                    goto LABEL_171;
                                                  }
                                                  v422 = 4LL;
                                                  v459 = 0LL;
                                                  if ( LODWORD(v395[0]) <= 5 )
                                                  {
                                                    Acl = -1073741811;
                                                  }
                                                  else
                                                  {
                                                    v274 = (PACL)v395[1];
                                                    Dacl = (PACL)v395[1];
                                                    while ( 1 )
                                                    {
                                                      v275 = *(_DWORD *)&v274->AclRevision;
                                                      Acl = RtlULongLongAdd((ULONGLONG)v274, 4uLL, (ULONGLONG *)&Dacl);
                                                      if ( Acl < 0 )
                                                        break;
                                                      Acl = RtlULongLongAdd((ULONGLONG)Dacl, v275, (ULONGLONG *)&Dacl);
                                                      if ( Acl < 0 )
                                                        goto LABEL_627;
                                                      v274 = Dacl;
                                                      if ( (unsigned int)(v277 + 1) >= 5 )
                                                      {
                                                        Acl = RtlULongLongAdd((ULONGLONG)Dacl, 4uLL, (ULONGLONG *)&Dacl);
                                                        if ( Acl >= 0 )
                                                        {
                                                          v279 = Dacl;
                                                          v276 = v278;
                                                          HIDWORD(v422) = v278;
                                                          if ( !v278 )
                                                            v279 = 0LL;
                                                          v459 = v279;
                                                        }
LABEL_627:
                                                        if ( Acl < 0 )
                                                          goto LABEL_527;
                                                        if ( !v276 )
                                                        {
                                                          Acl = -1073741762;
                                                          goto LABEL_527;
                                                        }
                                                        v280 = ExAllocatePoolWithTag(PagedPool, v276, 0x20534C53u);
                                                        if ( !v280 )
                                                        {
                                                          Acl = -1073741801;
                                                          goto LABEL_527;
                                                        }
                                                        memmove(v280, v459, HIDWORD(v422));
                                                        v467 = v459;
                                                        v411 = HIDWORD(v422);
                                                        if ( HIDWORD(v422) != 8 )
                                                          goto LABEL_590;
                                                        v258 = ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_140D2D498)(
                                                                 *v468,
                                                                 *v467);
                                                        Size[0] = 0;
                                                        v412 = 0;
                                                        v259 = RtlUIntAdd(4u, 4u, &v412);
                                                        v260 = v423;
                                                        Acl = v259;
                                                        if ( v259 >= 0 )
                                                          v260 = v412;
                                                        v423 = v260;
                                                        if ( v259 < 0 )
                                                          goto LABEL_527;
                                                        Acl = RtlUIntAdd(0, v260, Size);
                                                        if ( Acl < 0 )
                                                          goto LABEL_527;
                                                        v413 = v262;
                                                        v263 = RtlUIntAdd(v261 + 4, v261 + 8, &v413);
                                                        Acl = v263;
                                                        if ( v263 >= 0 )
                                                          v264 = v413;
                                                        v423 = v264;
                                                        if ( v263 < 0 )
                                                          goto LABEL_527;
                                                        Acl = RtlUIntAdd(Size[0], v264, Size);
                                                        if ( Acl < 0 )
                                                          goto LABEL_527;
                                                        HIDWORD(v392[0]) = Size[0];
                                                        if ( !Size[0] )
                                                          goto LABEL_413;
                                                        v266 = ExAllocatePoolWithTag(
                                                                 (POOL_TYPE)(v265 + 1),
                                                                 Size[0],
                                                                 0x20534C53u);
                                                        if ( v266 )
                                                        {
                                                          v392[1] = v266;
                                                          LODWORD(v392[0]) = 0;
                                                          v474 = 0;
                                                          v446 = v258 | 0x10000000;
                                                          *(_OWORD *)v495 = 0LL;
                                                          Acl = RtlULongLongAdd((ULONGLONG)v266, 4uLL, &v495[1]);
                                                          v269 = (int)v268;
                                                          if ( Acl >= 0 )
                                                          {
                                                            if ( v267 + 2 > (_DWORD *)((char *)v267 + HIDWORD(v392[0])) )
                                                              goto LABEL_418;
                                                            v270 = (int *)v495[1];
                                                            *v267 = 4;
                                                            *v270 = v446;
                                                            v269 = ++LODWORD(v392[0]);
                                                          }
                                                          if ( Acl < 0 )
                                                            goto LABEL_527;
                                                          v487 = v469;
                                                          v435 = (unsigned int)v268;
                                                          *(_OWORD *)v496 = 0LL;
                                                          if ( v392[1] == v268 )
                                                          {
                                                            v414 = (unsigned int)v268;
                                                            v271 = RtlUIntAdd(4u, 8u, &v414);
                                                            Acl = v271;
                                                            if ( v271 >= 0 )
                                                              v272 = v414;
                                                            v435 = v272;
                                                            if ( v271 >= 0 )
                                                            {
                                                              Acl = RtlUIntAdd(HIDWORD(v392[0]), v272, (UINT *)v392 + 1);
                                                              if ( Acl >= 0 )
                                                              {
                                                                ++LODWORD(v392[0]);
                                                                Acl = v273;
                                                              }
                                                            }
                                                            goto LABEL_527;
                                                          }
                                                          v281 = (UINT *)v392[1];
                                                          v396 = (ULONGLONG)v392[1];
                                                          v282 = 0;
                                                          if ( v269 )
                                                          {
                                                            do
                                                            {
                                                              v283 = *v281;
                                                              NumberOfBytes = 0;
                                                              v284 = RtlUIntAdd(4u, v283, (UINT *)&NumberOfBytes);
                                                              Acl = v284;
                                                              if ( v284 >= 0 )
                                                                v285 = NumberOfBytes;
                                                              v435 = v285;
                                                              if ( v284 < 0 )
                                                                goto LABEL_527;
                                                              Acl = RtlULongLongAdd(v286, v285, &v396);
                                                              if ( Acl < 0 )
                                                                goto LABEL_527;
                                                              v281 = (UINT *)v396;
                                                            }
                                                            while ( ++v282 < v287 );
                                                          }
                                                          Acl = RtlULongLongAdd((ULONGLONG)v281, 4uLL, &v496[1]);
                                                          if ( Acl < 0 )
                                                            goto LABEL_527;
                                                          if ( v288 + 3 <= (_DWORD *)((char *)v392[1] + HIDWORD(v392[0])) )
                                                          {
                                                            v289 = (_QWORD *)v496[1];
                                                            *v288 = 8;
                                                            *v289 = v487;
                                                            ++LODWORD(v392[0]);
                                                            goto LABEL_527;
                                                          }
                                                          goto LABEL_384;
                                                        }
                                                        goto LABEL_415;
                                                      }
                                                    }
                                                  }
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
                                          else
                                          {
                                            Acl = -1073741811;
                                          }
                                        }
                                        goto LABEL_527;
                                      }
                                      if ( v427 == 104 )
                                      {
                                        IsAppLicensed = sub_140964A5C(v395, v9, v154, v392);
                                        goto LABEL_678;
                                      }
                                      if ( v427 <= 0x17 )
                                      {
                                        if ( v427 == 23 )
                                        {
                                          v172 = qword_140D2D4C8;
                                          v451 = 0;
                                          memset(v501, 0, sizeof(v501));
                                          v502 = 0LL;
                                          v429 = 0;
                                          memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
                                          *(_QWORD *)&Size[1] = qword_140D2D4C8;
                                          v173 = RtlLengthSid(*(PSID *)(qword_140D2D4C8 + 392));
                                          v174 = RtlLengthSid(*(PSID *)(v172 + 384)) + v173;
                                          v175 = RtlLengthSid(*(PSID *)(v172 + 272)) + 32 + v174;
                                          v176 = (ACL *)ExAllocatePoolWithTag(PagedPool, v175, 0x20534C53u);
                                          Dacl = v176;
                                          if ( v176 )
                                          {
                                            Acl = RtlCreateAcl(v176, v175, 2u);
                                            if ( Acl >= 0 )
                                            {
                                              Acl = RtlpAddKnownAce(
                                                      Dacl,
                                                      2u,
                                                      0,
                                                      32,
                                                      *(unsigned __int8 **)(*(_QWORD *)&Size[1] + 384LL),
                                                      0);
                                              if ( Acl >= 0 )
                                              {
                                                Acl = RtlpAddKnownAce(
                                                        Dacl,
                                                        2u,
                                                        0,
                                                        32,
                                                        *(unsigned __int8 **)(*(_QWORD *)&Size[1] + 392LL),
                                                        0);
                                                if ( Acl >= 0 )
                                                {
                                                  Acl = RtlpAddKnownAce(
                                                          Dacl,
                                                          2u,
                                                          0,
                                                          32,
                                                          *(unsigned __int8 **)(*(_QWORD *)&Size[1] + 272LL),
                                                          0);
                                                  if ( Acl >= 0 )
                                                  {
                                                    Acl = RtlCreateSecurityDescriptor(v501, 1u);
                                                    if ( Acl >= 0 )
                                                    {
                                                      Acl = RtlSetDaclSecurityDescriptor(v501, 1u, Dacl, 0);
                                                      if ( Acl >= 0 )
                                                      {
                                                        SeCaptureSubjectContext(&SubjectSecurityContext);
                                                        v179 = SeAccessCheck(
                                                                 v501,
                                                                 &SubjectSecurityContext,
                                                                 0,
                                                                 0x20u,
                                                                 0,
                                                                 0LL,
                                                                 (PGENERIC_MAPPING)&IopFileMapping,
                                                                 1,
                                                                 &v451,
                                                                 &v429);
                                                        SeReleaseSubjectContext(&SubjectSecurityContext);
                                                        if ( !v179 )
                                                          Acl = v429;
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            ExFreePoolWithTag(Dacl, 0x20534C53u);
                                            if ( Acl >= 0 )
                                            {
                                              v452 = 0;
                                              v472 = 8LL;
                                              ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v472, 8u, &v452);
                                              v180 = v11[4];
                                              if ( v180 != 160
                                                || ((v181 = (const void *)*((_QWORD *)v11 + 3),
                                                     memcmp(qword_140989C80, v181, 0xA0uLL))
                                                 || *((_DWORD *)v9 + 4) != 160
                                                 || memcmp(qword_140989D20, v9[3], 0xA0uLL)
                                                 || v11[8] != 8
                                                 || **((_QWORD **)v11 + 5) != 0x35DCEB18766AABAALL
                                                 || *((_DWORD *)v9 + 8) != 8
                                                 || *(_QWORD *)v9[5] != 0x14CEA8BAE086077CLL)
                                                && (memcmp(qword_14098A040, v181, 0xA0uLL)
                                                 || *((_DWORD *)v9 + 4) != 160
                                                 || memcmp(qword_14098A400, v9[3], 0xA0uLL)
                                                 || v11[8] != 8
                                                 || **((_QWORD **)v11 + 5) != 0xF10D668DB2BB8BB9uLL
                                                 || *((_DWORD *)v9 + 8) != 8
                                                 || *(_QWORD *)v9[5] != 0x768DFD321621EA95LL) )
                                              {
                                                if ( v180 != 160 )
                                                  goto LABEL_308;
                                                v182 = (const void *)*((_QWORD *)v11 + 3);
                                                if ( (memcmp(qword_14098A4A0, v182, 0xA0uLL)
                                                   || *((_DWORD *)v9 + 4) != 160
                                                   || memcmp(sub_140989960, v9[3], 0xA0uLL)
                                                   || v11[8] != 8
                                                   || **((_QWORD **)v11 + 5) != 0xA10B922F1A2F2A8AuLL
                                                   || *((_DWORD *)v9 + 8) != 8
                                                   || *(_QWORD *)v9[5] != 0xC349B50B0A716A96uLL)
                                                  && (memcmp(qword_140989E60, v182, 0xA0uLL)
                                                   || *((_DWORD *)v9 + 4) != 160
                                                   || memcmp(qword_14098A0E0, v9[3], 0xA0uLL)
                                                   || v11[8] != 8
                                                   || **((_QWORD **)v11 + 5) != 0xA6723CF736811074uLL
                                                   || *((_DWORD *)v9 + 8) != 8
                                                   || *(_QWORD *)v9[5] != 0x7511056E178DA076LL) )
                                                {
                                                  goto LABEL_308;
                                                }
                                              }
                                              v444 = 0;
                                              Acl = 0;
                                              updated = QueryUpdateFileEaAllowedExt(&v444);
                                              if ( updated == -1073741637 || (Acl = updated, updated >= 0) && v444 != 1 )
                                              {
                                                v184 = Acl;
                                                if ( (BYTE2(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 7) == 0 )
                                                  v184 = -2147024891;
                                                Acl = v184;
                                              }
                                            }
                                          }
                                          else
                                          {
                                            Acl = -1073741801;
                                          }
                                          v6 = v11;
                                          if ( Acl < 0 )
                                            goto LABEL_171;
                                          IsAppLicensed = SPCallServerHandleFileIntegrityUpdate(v395, v177, v178, v392);
                                          goto LABEL_678;
                                        }
                                        if ( !v427 )
                                        {
                                          IsAppLicensed = SPCallServerHandleQueryPolicy(
                                                            (__int64)v395,
                                                            (__int64)v9,
                                                            v410,
                                                            (__int64)v392);
                                          goto LABEL_678;
                                        }
                                        if ( v427 != 1 )
                                        {
                                          switch ( v427 )
                                          {
                                            case 2u:
                                              IsAppLicensed = SPCallServerHandleAuthenticateCaller(v153, v9, v410, v392);
                                              goto LABEL_678;
                                            case 4u:
                                              IsAppLicensed = sub_140962064(v395, v9, v154, v392);
                                              goto LABEL_678;
                                            case 5u:
                                              IsAppLicensed = SPCallServerHandleWaitForDisplayWindow(
                                                                v395,
                                                                v9,
                                                                v154,
                                                                v392);
                                              goto LABEL_678;
                                            case 6u:
                                              IsAppLicensed = sub_140965F90(v395, v9, v154, v392);
                                              goto LABEL_678;
                                            case 7u:
                                              IsAppLicensed = sub_1409647BC(v395, v9, v154, v392);
                                              goto LABEL_678;
                                            case 0x16u:
                                              IsAppLicensed = SPCallServerHandleFileUsnQuery(v395, v152, v154, v392);
LABEL_678:
                                              Acl = IsAppLicensed;
                                              v247 = IsAppLicensed < 0;
LABEL_679:
                                              if ( v247 )
                                                goto LABEL_171;
                                              goto LABEL_680;
                                          }
LABEL_557:
                                          Acl = sub_14096573C(v153, v392);
                                          if ( Acl < 0 )
                                          {
                                            v7 = v387;
                                            v8 = 0LL;
                                            v10 = 0LL;
                                            goto LABEL_173;
                                          }
LABEL_680:
                                          v471 = __rdtsc();
                                          v404 = 8;
                                          Acl = RtlUIntAdd(8u, HIDWORD(v392[0]), &v404);
                                          if ( Acl >= 0 )
                                          {
                                            v294 = (v404 + 7) & 0xFFFFFFF8;
                                            if ( v294 >= v404 )
                                            {
                                              v404 = (v404 + 7) & 0xFFFFFFF8;
                                              if ( v294 )
                                              {
                                                v295 = (char *)ExAllocatePoolWithTag(PagedPool, v294, 0x20534C53u);
                                                v293 = 0LL;
                                                v296 = v295;
                                                if ( v295 )
                                                {
                                                  *(_QWORD *)&Size[1] = v295;
                                                  *(_DWORD *)v295 = v392[0];
                                                  Acl = RtlULongLongAdd((ULONGLONG)v295, 4uLL, (ULONGLONG *)&Size[1]);
                                                  if ( Acl >= 0 )
                                                  {
                                                    v298 = *(_QWORD *)&Size[1];
                                                    **(_DWORD **)&Size[1] = HIDWORD(v392[0]);
                                                    Acl = RtlULongLongAdd(v298, v297, (ULONGLONG *)&Size[1]);
                                                    if ( Acl >= 0 )
                                                    {
                                                      v299 = *(void **)&Size[1];
                                                      *(_QWORD *)&v296[v404 - 8] = v471;
                                                      memmove(v299, v392[1], HIDWORD(v392[0]));
                                                      v293 = 0LL;
                                                      v385 = (unsigned __int8 *)v296;
                                                      v296 = 0LL;
                                                      v402 = v404;
                                                    }
                                                  }
                                                  if ( v296 )
                                                  {
                                                    ExFreePoolWithTag(v296, 0x20534C53u);
                                                    v293 = 0LL;
                                                  }
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
                                            else
                                            {
                                              Acl = -1073741675;
                                            }
                                          }
                                          v8 = v385;
                                          v6 = v11;
                                          if ( Acl >= 0 )
                                          {
                                            v461 = v293;
                                            if ( v385 && v402 )
                                            {
                                              v300 = (__int64 *)v9[5];
                                              if ( v300
                                                && (v301 = *((_DWORD *)v9 + 8)) != 0
                                                && (v400 = (ULONGLONG)v9[3]) != 0
                                                && (v302 = *((_DWORD *)v9 + 4)) != 0 )
                                              {
                                                if ( v301 != 8 )
                                                  goto LABEL_751;
                                                if ( v302 != 160 )
                                                  goto LABEL_751;
                                                v303 = *v300;
                                                v304 = (unsigned __int8)v293;
                                                v305 = (unsigned __int64)v293;
                                                do
                                                  v304 ^= v385[v305++];
                                                while ( v305 < v402 );
                                                v388 = v304;
                                                v306 = ExAllocatePoolWithTag(PagedPool, v402 + 8LL, 0x20534C53u);
                                                LODWORD(v293) = 0;
                                                P = v306;
                                                if ( v306 )
                                                {
                                                  v307 = v402;
                                                  v308 = v385;
                                                  v507 = v303;
                                                  v309 = 0;
                                                  *(_QWORD *)&Size[1] = v385;
                                                  pcbLength = (size_t)v306;
                                                  Size[0] = 0;
                                                  NumberOfBytes_4 = 0;
                                                  v310 = v402 & 7;
                                                  if ( (v402 & 7) != 0 )
                                                  {
                                                    Size[0] = 0;
                                                    NumberOfBytes_4 = 0;
                                                    v311 = 0;
                                                    v312 = 0;
                                                    v313 = 56;
                                                    do
                                                    {
                                                      v314 = *v308++;
                                                      if ( v312 >= 4 )
                                                        v311 |= v314 << v313;
                                                      else
                                                        LODWORD(v293) = (v314 << (v313 - 32)) | (unsigned int)v293;
                                                      ++v312;
                                                      v313 -= 8;
                                                    }
                                                    while ( v312 < v310 );
                                                    NumberOfBytes_4 = (unsigned int)v293;
                                                    Size[0] = v311;
                                                    *(_QWORD *)&Size[1] = v308;
                                                    v315 = 16LL;
                                                    v316 = -1;
                                                    Dacl = (PACL)16;
                                                    v317 = (unsigned __int8 *)(v400 + 126);
                                                    v318 = (unsigned __int8 *)(v400 + 158);
                                                    v396 = v400 + 158;
                                                    v319 = 30LL;
                                                    do
                                                    {
                                                      v320 = v318[1];
                                                      if ( (unsigned __int8)v320 < 0x1Fu )
                                                      {
                                                        v321 = funcs_140689BDF[v320](
                                                                 v319 + 1,
                                                                 *(v317 - 2),
                                                                 *(v317 - 1),
                                                                 *v317,
                                                                 v317[1],
                                                                 (__int64)&v507,
                                                                 v309);
                                                        v315 = (__int64)Dacl;
                                                        v316 ^= v321;
                                                        v318 = (unsigned __int8 *)v396;
                                                      }
                                                      v322 = *v318;
                                                      if ( (unsigned __int8)v322 < 0x1Fu )
                                                      {
                                                        v323 = funcs_140689BDF[v322](
                                                                 v319,
                                                                 *(v317 - 6),
                                                                 *(v317 - 5),
                                                                 *(v317 - 4),
                                                                 *(v317 - 3),
                                                                 (__int64)&v507,
                                                                 v316);
                                                        v315 = (__int64)Dacl;
                                                        v309 ^= v323;
                                                        v318 = (unsigned __int8 *)v396;
                                                      }
                                                      v318 -= 2;
                                                      v319 -= 2LL;
                                                      v317 -= 8;
                                                      v396 = (ULONGLONG)v318;
                                                      Dacl = (PACL)--v315;
                                                    }
                                                    while ( v315 );
                                                    v309 ^= NumberOfBytes_4;
                                                    v324 = Size[0] ^ v316;
                                                    LODWORD(v293) = 0;
                                                    v304 = v388;
                                                    v325 = v309;
                                                    v11 = (unsigned int *)Src;
                                                    v326 = Size[0] ^ v316;
                                                    v327 = 0;
                                                    v9 = v439;
                                                    v407 = v324;
                                                    if ( v310 )
                                                    {
                                                      v328 = (_BYTE *)pcbLength;
                                                      do
                                                      {
                                                        v293 = v328 + 1;
                                                        if ( v327 >= 4 )
                                                        {
                                                          v326 = __ROL4__(v326, 8);
                                                          v329 = v326;
                                                        }
                                                        else
                                                        {
                                                          v325 = __ROL4__(v325, 8);
                                                          v329 = v325;
                                                        }
                                                        ++v327;
                                                        *v328++ = v329;
                                                      }
                                                      while ( v327 < v310 );
                                                      LODWORD(v324) = v407;
                                                      v306 = v293;
                                                      LODWORD(v293) = 0;
                                                    }
                                                    else
                                                    {
                                                      v306 = (void *)pcbLength;
                                                    }
                                                    if ( (unsigned int)v310 <= 4 )
                                                    {
                                                      LODWORD(v407) = 0;
                                                      if ( (unsigned int)v310 < 4 )
                                                        v309 = v309 >> (8 * (4 - v310)) << (8 * (4 - v310));
                                                    }
                                                    else
                                                    {
                                                      v407 = (unsigned int)v324 >> (8 * (8 - v310)) << (8 * (8 - v310));
                                                    }
                                                    v308 = *(unsigned __int8 **)&Size[1];
                                                    v307 = v402;
                                                  }
                                                  Dacl = (PACL)((unsigned __int64)v307 >> 3);
                                                  if ( Dacl )
                                                  {
                                                    v330 = v308 + 2;
                                                    v331 = Size[0];
                                                    v332 = v407;
                                                    pcbLength = (size_t)v306 + 7;
                                                    v333 = v400 + 129;
                                                    v334 = v400 + 2;
                                                    v403 = v400 + 129;
                                                    ullAugend = v400 + 2;
                                                    do
                                                    {
                                                      v335 = 16LL;
                                                      v336 = (unsigned __int8 *)v334;
                                                      v337 = v330[2] << 8;
                                                      v338 = *v330 | ((*(v330 - 1) | (*(v330 - 2) << 8)) << 8);
                                                      *(_QWORD *)&Size[1] = 16LL;
                                                      v339 = v330[1] | (v338 << 8);
                                                      v340 = v339 ^ v309;
                                                      v341 = (unsigned __int8 *)v333;
                                                      NumberOfBytes = v330[5] | ((v330[4] | ((v330[3] | v337) << 8)) << 8);
                                                      v407 = NumberOfBytes ^ v332;
                                                      v342 = v407;
                                                      v343 = 0LL;
                                                      v400 = (ULONGLONG)(v330 + 8);
                                                      v396 = v333;
                                                      do
                                                      {
                                                        v344 = *(v341 - 1);
                                                        if ( (unsigned __int8)v344 < 0x1Fu )
                                                        {
                                                          v345 = funcs_140689BDF[v344](
                                                                   v343,
                                                                   *(v336 - 2),
                                                                   *(v336 - 1),
                                                                   *v336,
                                                                   v336[1],
                                                                   (__int64)&v507,
                                                                   v342);
                                                          v335 = *(_QWORD *)&Size[1];
                                                          v340 ^= v345;
                                                          v341 = (unsigned __int8 *)v396;
                                                        }
                                                        v346 = *v341;
                                                        if ( (unsigned __int8)v346 < 0x1Fu )
                                                        {
                                                          v347 = funcs_140689BDF[v346](
                                                                   v343 + 1,
                                                                   v336[2],
                                                                   v336[3],
                                                                   v336[4],
                                                                   v336[5],
                                                                   (__int64)&v507,
                                                                   v340);
                                                          v335 = *(_QWORD *)&Size[1];
                                                          v342 = v347 ^ (unsigned int)v342;
                                                          v341 = (unsigned __int8 *)v396;
                                                        }
                                                        v341 += 2;
                                                        v343 += 2LL;
                                                        v336 += 8;
                                                        v396 = (ULONGLONG)v341;
                                                        *(_QWORD *)&Size[1] = --v335;
                                                      }
                                                      while ( v335 );
                                                      v407 = v342;
                                                      v348 = (HIWORD(v507)
                                                            * ((unsigned __int16)v507 + __ROR4__(~(_DWORD)v342, 5))) ^ v340;
                                                      v349 = (v348 >> 10) ^ (WORD1(v507) * (v348 ^ HIWORD(v507))) ^ v342;
                                                      v350 = __ROR4__(v349, 10) ^ (WORD2(v507)
                                                                                 * __ROR4__(v507 ^ v349, 12)) ^ v348;
                                                      v351 = (HIWORD(v507) * __ROR4__(v350 - v507, 14)
                                                            - __ROL4__(v350, 8)) ^ v349;
                                                      v352 = (__ROL4__(v351, 2)
                                                            + (unsigned __int16)v507
                                                            * __ROR4__(HIDWORD(v507) + v351, 15)) ^ v350;
                                                      v353 = (WORD1(v507) * (v352 ^ WORD2(v507))) ^ __ROR4__(v352, 6) ^ v351;
                                                      v354 = (HIDWORD(v507) - (v353 ^ v507)) ^ v352;
                                                      v355 = (HIWORD(v507) * __ROL4__(v354 ^ WORD1(v507), 6)
                                                            - __ROL4__(v354, 2)) ^ v353;
                                                      v356 = ((unsigned __int16)v507 * (v355 - WORD2(v507))
                                                            - (v355 >> 13)) ^ v354;
                                                      v357 = (WORD1(v507) * __ROR4__(HIDWORD(v507) + v356, 9)
                                                            - __ROL4__(v356, 2)) ^ v355;
                                                      v358 = (_BYTE *)pcbLength;
                                                      v330 = (unsigned __int8 *)v400;
                                                      v334 = ullAugend;
                                                      LODWORD(v293) = 0;
                                                      v359 = (__ROL4__(v357, 10) + WORD2(v507)
                                                                                 * __ROL4__(v357 - v507, 5)) ^ v356;
                                                      v360 = v359 ^ v507 ^ HIDWORD(v507) ^ v357;
                                                      v361 = NumberOfBytes_4 ^ v359;
                                                      *(_BYTE *)(pcbLength - 4) = v361;
                                                      v362 = v331 ^ v360;
                                                      v331 = NumberOfBytes;
                                                      *v358 = v362;
                                                      v363 = __ROR4__(v361, 8);
                                                      *(v358 - 5) = v363;
                                                      v364 = __ROR4__(v362, 8);
                                                      *(v358 - 1) = v364;
                                                      v365 = __ROR4__(v363, 8);
                                                      *(v358 - 6) = v365;
                                                      v366 = __ROR4__(v364, 8);
                                                      *(v358 - 2) = v366;
                                                      v367 = __ROR4__(v365, 8);
                                                      *(v358 - 7) = v367;
                                                      v368 = __ROR4__(v366, 8);
                                                      *(v358 - 3) = v368;
                                                      v332 = __ROR4__(v368, 8);
                                                      v309 = __ROR4__(v367, 8);
                                                      v52 = Dacl == (PACL)1;
                                                      Dacl = (PACL)((char *)Dacl - 1);
                                                      pcbLength = (size_t)(v358 + 8);
                                                      v333 = v403;
                                                      NumberOfBytes_4 = v339;
                                                    }
                                                    while ( !v52 );
                                                    v304 = v388;
                                                    v11 = (unsigned int *)Src;
                                                    v9 = v439;
                                                  }
                                                  v369 = P;
                                                  v370 = v402 + 8LL;
                                                  *(_QWORD *)((char *)P + v402) = v304;
                                                  v505 = v370;
                                                  v461 = v369;
                                                  Acl = 0;
                                                  if ( (_DWORD)v370 )
                                                  {
                                                    pcbLength = (unsigned int)v370;
                                                    v371 = ExAllocatePoolWithTag(
                                                             PagedPool,
                                                             (unsigned int)v370,
                                                             0x20534C53u);
                                                    LODWORD(v293) = 0;
                                                    v372 = v371;
                                                    if ( v371 )
                                                    {
                                                      memmove(v371, v369, pcbLength);
                                                      v9[1] = v372;
                                                      *(_DWORD *)v9 = v370;
                                                      LODWORD(v293) = 0;
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
                                                else
                                                {
LABEL_751:
                                                  Acl = -1073741823;
                                                }
                                                if ( v461 )
                                                {
                                                  ExFreePoolWithTag(v461, 0x20534C53u);
                                                  LODWORD(v293) = 0;
                                                  v461 = 0LL;
                                                }
                                                v6 = v11;
                                                if ( Acl >= 0 )
                                                {
                                                  v434 = (unsigned int)v293;
                                                  v373 = *(_DWORD *)v9;
                                                  NumberOfBytes_4 = 4;
                                                  Acl = RtlUIntAdd(4u, v373, &NumberOfBytes_4);
                                                  if ( Acl >= 0 )
                                                  {
                                                    Acl = RtlUIntAdd(NumberOfBytes_4, 4u, &NumberOfBytes_4);
                                                    if ( Acl >= 0 )
                                                    {
                                                      Acl = RtlUIntAdd(
                                                              NumberOfBytes_4,
                                                              *((_DWORD *)v9 + 4),
                                                              &NumberOfBytes_4);
                                                      if ( Acl >= 0 )
                                                      {
                                                        Acl = RtlUIntAdd(NumberOfBytes_4, 4u, &NumberOfBytes_4);
                                                        if ( Acl >= 0 )
                                                        {
                                                          Acl = RtlUIntAdd(
                                                                  NumberOfBytes_4,
                                                                  *((_DWORD *)v9 + 8),
                                                                  &NumberOfBytes_4);
                                                          if ( Acl >= 0 )
                                                            v374 = NumberOfBytes_4;
                                                          v434 = v374;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  if ( Acl >= 0 )
                                                  {
                                                    if ( v374 )
                                                    {
                                                      v378 = ExAllocatePoolWithTag(PagedPool, v374, 0x20534C53u);
                                                      v375 = 0LL;
                                                      v379 = v378;
                                                      if ( v378 )
                                                      {
                                                        *v378 = *(_DWORD *)v9;
                                                        i = (ULONGLONG)v378;
                                                        Acl = RtlULongLongAdd((ULONGLONG)v378, 4uLL, &i);
                                                        if ( Acl < 0 )
                                                          goto LABEL_777;
                                                        memmove((void *)i, v9[1], *(unsigned int *)v9);
                                                        v380 = RtlULongLongAdd(i, *(unsigned int *)v9, &i);
                                                        v375 = 0LL;
                                                        Acl = v380;
                                                        if ( v380 < 0 )
                                                          goto LABEL_777;
                                                        v381 = i;
                                                        *(_DWORD *)i = *((_DWORD *)v9 + 4);
                                                        Acl = RtlULongLongAdd(v381, 4uLL, &i);
                                                        if ( Acl < 0 )
                                                          goto LABEL_777;
                                                        memmove((void *)i, v9[3], *((unsigned int *)v9 + 4));
                                                        v382 = RtlULongLongAdd(i, *((unsigned int *)v9 + 4), &i);
                                                        v375 = 0LL;
                                                        Acl = v382;
                                                        if ( v382 < 0
                                                          || (v383 = i,
                                                              *(_DWORD *)i = *((_DWORD *)v9 + 8),
                                                              Acl = RtlULongLongAdd(v383, 4uLL, &i),
                                                              Acl < 0)
                                                          || (memmove((void *)i, v9[5], *((unsigned int *)v9 + 8)),
                                                              v384 = RtlULongLongAdd(i, *((unsigned int *)v9 + 8), &i),
                                                              v375 = 0LL,
                                                              Acl = v384,
                                                              v384 < 0) )
                                                        {
LABEL_777:
                                                          v376 = v375;
                                                        }
                                                        else
                                                        {
                                                          v376 = v379;
                                                          v386 = v379;
                                                          v379 = 0LL;
                                                          v432 = v434;
                                                        }
                                                        if ( v379 )
                                                        {
                                                          ExFreePoolWithTag(v379, 0x20534C53u);
                                                          v375 = 0LL;
                                                        }
                                                      }
                                                      else
                                                      {
                                                        Acl = -1073741801;
                                                        v376 = 0LL;
                                                      }
LABEL_766:
                                                      v7 = v387;
                                                      v6 = v11;
                                                      if ( Acl >= 0 )
                                                      {
                                                        v10 = v375;
                                                        v377 = (_DWORD *)v489;
                                                        *v488 = v376;
                                                        v8 = v385;
                                                        *v377 = v432;
                                                        goto LABEL_173;
                                                      }
                                                      goto LABEL_701;
                                                    }
                                                    Acl = -1073741762;
                                                  }
                                                  v376 = 0LL;
                                                  goto LABEL_766;
                                                }
                                              }
                                              else
                                              {
                                                Acl = -1073741811;
                                              }
                                              v7 = v387;
LABEL_701:
                                              v8 = v385;
                                              goto LABEL_696;
                                            }
                                            Acl = -1073741811;
                                          }
                                          v7 = v387;
LABEL_696:
                                          v10 = v386;
                                          goto LABEL_173;
                                        }
                                        v164 = qword_140D2D4C8;
                                        GrantedAccess = 0;
                                        memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
                                        v500 = 0LL;
                                        AccessStatus = 0;
                                        memset(&SubjectContext, 0, sizeof(SubjectContext));
                                        *(_QWORD *)&Size[1] = qword_140D2D4C8;
                                        v165 = RtlLengthSid(*(PSID *)(qword_140D2D4C8 + 392));
                                        v166 = RtlLengthSid(*(PSID *)(v164 + 384)) + v165;
                                        v167 = RtlLengthSid(*(PSID *)(v164 + 272)) + 32 + v166;
                                        v168 = (ACL *)ExAllocatePoolWithTag(PagedPool, v167, 0x20534C53u);
                                        Dacl = v168;
                                        if ( !v168 )
                                        {
                                          Acl = -1073741801;
LABEL_279:
                                          v6 = v11;
                                          if ( Acl < 0 )
                                            goto LABEL_171;
                                          IsAppLicensed = SPCallServerHandleUpdatePolicies(v395, v9, v410, v392);
                                          goto LABEL_678;
                                        }
                                        Acl = RtlCreateAcl(v168, v167, 2u);
                                        if ( Acl >= 0 )
                                        {
                                          Acl = RtlpAddKnownAce(
                                                  Dacl,
                                                  2u,
                                                  0,
                                                  32,
                                                  *(unsigned __int8 **)(*(_QWORD *)&Size[1] + 384LL),
                                                  0);
                                          if ( Acl >= 0 )
                                          {
                                            Acl = RtlpAddKnownAce(
                                                    Dacl,
                                                    2u,
                                                    0,
                                                    32,
                                                    *(unsigned __int8 **)(*(_QWORD *)&Size[1] + 392LL),
                                                    0);
                                            if ( Acl >= 0 )
                                            {
                                              Acl = RtlpAddKnownAce(
                                                      Dacl,
                                                      2u,
                                                      0,
                                                      32,
                                                      *(unsigned __int8 **)(*(_QWORD *)&Size[1] + 272LL),
                                                      0);
                                              if ( Acl >= 0 )
                                              {
                                                Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                                                if ( Acl >= 0 )
                                                {
                                                  Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Dacl, 0);
                                                  if ( Acl >= 0 )
                                                  {
                                                    SeCaptureSubjectContext(&SubjectContext);
                                                    v169 = SeAccessCheck(
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
                                                    if ( !v169 )
                                                      Acl = AccessStatus;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        ExFreePoolWithTag(Dacl, 0x20534C53u);
                                        if ( Acl < 0 )
                                          goto LABEL_279;
                                        ReturnLength = 0;
                                        SystemInformation = 8LL;
                                        ZwQuerySystemInformation(
                                          SystemCodeIntegrityInformation,
                                          &SystemInformation,
                                          8u,
                                          &ReturnLength);
                                        if ( v11[4] == 160 )
                                        {
                                          if ( (v170 = (const void *)*((_QWORD *)v11 + 3),
                                                !memcmp(qword_140989BE0, v170, 0xA0uLL))
                                            && *((_DWORD *)v9 + 4) == 160
                                            && !memcmp(qword_14098A220, v9[3], 0xA0uLL)
                                            && v11[8] == 8
                                            && **((_QWORD **)v11 + 5) == 0xA564595855B292C4uLL
                                            && *((_DWORD *)v9 + 8) == 8
                                            && *(_QWORD *)v9[5] == 0x1B732BD76B4D09FCLL
                                            || !memcmp(qword_140989FA0, v170, 0xA0uLL)
                                            && *((_DWORD *)v9 + 4) == 160
                                            && !memcmp(qword_140989A00, v9[3], 0xA0uLL)
                                            && v11[8] == 8
                                            && **((_QWORD **)v11 + 5) == 0x93278D843BBDC445uLL
                                            && *((_DWORD *)v9 + 8) == 8
                                            && *(_QWORD *)v9[5] == 0x6223E824AB21D998LL )
                                          {
                                            v478 = 0;
                                            v171 = 0;
                                            if ( (BYTE2(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 7) == 0 )
                                              v171 = -2147024891;
                                            Acl = v171;
                                            goto LABEL_279;
                                          }
                                        }
LABEL_308:
                                        Acl = -2147024891;
                                        goto LABEL_170;
                                      }
                                      if ( v427 == 24 )
                                      {
                                        IsAppLicensed = SPCallServerHandleFileIntegrityQuery(v395, v152, v154, v392);
                                        goto LABEL_678;
                                      }
                                      if ( v427 != 30 )
                                      {
                                        if ( v427 != 31 )
                                        {
                                          if ( v427 != 37 )
                                          {
                                            switch ( v427 )
                                            {
                                              case 'd':
                                                IsAppLicensed = sub_140965874(v395, v9, v154, v392);
                                                goto LABEL_678;
                                              case 'e':
                                                IsAppLicensed = sub_1409654D8(v395, v9, v154, v392);
                                                goto LABEL_678;
                                              case 'f':
                                                IsAppLicensed = sub_1409647AC();
                                                goto LABEL_678;
                                              case 'g':
                                                IsAppLicensed = sub_140962A10(v395, v9, v154, v392);
                                                goto LABEL_678;
                                            }
                                            goto LABEL_557;
                                          }
                                          v441 = 0;
                                          v185 = 0;
                                          v484 = 0LL;
                                          v453 = 0;
                                          if ( v395[1] && LODWORD(v395[0]) > 3 )
                                          {
                                            v186 = (UINT *)v395[1];
                                            pullResult = (ULONGLONG)v395[1];
                                            Size[0] = 0;
                                            while ( 1 )
                                            {
                                              NumberOfBytes = *v186;
                                              Acl = RtlULongLongAdd((ULONGLONG)v186, 4uLL, &pullResult);
                                              if ( Acl < 0 )
                                                break;
                                              Acl = RtlULongLongAdd(
                                                      pullResult,
                                                      (unsigned int)NumberOfBytes,
                                                      &pullResult);
                                              if ( Acl < 0 )
                                                break;
                                              v186 = (UINT *)pullResult;
                                              if ( ++Size[0] >= 3 )
                                              {
                                                NumberOfBytes = *(_DWORD *)pullResult;
                                                Acl = RtlULongLongAdd(pullResult, 4uLL, &pullResult);
                                                if ( Acl >= 0 )
                                                {
                                                  v188 = NumberOfBytes;
                                                  v187 = (int *)pullResult;
                                                  v453 = NumberOfBytes;
                                                  if ( !NumberOfBytes )
                                                    v187 = 0LL;
                                                  v484 = v187;
                                                }
                                                break;
                                              }
                                            }
                                            if ( Acl >= 0 )
                                            {
                                              if ( v188 != 4 )
                                              {
LABEL_384:
                                                Acl = -1073741789;
LABEL_527:
                                                v6 = v11;
                                                v247 = Acl < 0;
                                                goto LABEL_679;
                                              }
                                              v441 = *v187;
                                            }
                                          }
                                          else
                                          {
                                            Acl = -1073741811;
                                          }
                                          if ( Acl >= 0 )
                                          {
                                            v442 = 0;
                                            puResult = 0;
                                            v189 = RtlUIntAdd(4u, 4u, &puResult);
                                            v192 = v191;
                                            Acl = v189;
                                            if ( v189 >= 0 )
                                              v192 = puResult;
                                            v479 = v192;
                                            if ( v189 >= 0 )
                                            {
                                              Acl = RtlUIntAdd(0, v192, &v442);
                                              if ( Acl >= 0 )
                                                v190 = v442;
                                            }
                                            if ( Acl >= 0 )
                                            {
                                              v450 = v191;
                                              v424 = 8;
                                              Acl = RtlUIntAdd(8u, v190, &v424);
                                              if ( Acl >= 0 )
                                              {
                                                v417 = 0;
                                                v196 = (v424 + 7) & 0xFFFFFFF8;
                                                if ( v196 >= v424 )
                                                {
                                                  v417 = (v424 + 7) & 0xFFFFFFF8;
                                                  Acl = RtlUIntAdd(v196, v193, &v417);
                                                  if ( Acl >= 0 )
                                                    v195 = v417;
                                                }
                                                else
                                                {
                                                  Acl = -1073741675;
                                                }
                                                if ( Acl >= 0 )
                                                {
                                                  uAugend = 4;
                                                  Acl = RtlUIntAdd(4u, v195, &uAugend);
                                                  if ( Acl >= 0 )
                                                  {
                                                    Acl = RtlUIntAdd(uAugend, v197, &uAugend);
                                                    if ( Acl >= 0 )
                                                    {
                                                      Acl = RtlUIntAdd(uAugend, *((_DWORD *)v9 + 4), &uAugend);
                                                      if ( Acl >= 0 )
                                                      {
                                                        Acl = RtlUIntAdd(uAugend, 4u, &uAugend);
                                                        if ( Acl >= 0 )
                                                        {
                                                          Acl = RtlUIntAdd(uAugend, *((_DWORD *)v9 + 8), &uAugend);
                                                          if ( Acl >= 0 )
                                                            v198 = uAugend;
                                                          v450 = v198;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  if ( Acl >= 0 )
                                                    v185 = v198;
                                                }
                                              }
                                              if ( Acl >= 0 )
                                              {
                                                if ( v410 >= v185 )
                                                  dword_140D2D0BC = v441;
                                                HIDWORD(v392[0]) = v194;
                                                if ( v194 )
                                                {
                                                  v199 = ExAllocatePoolWithTag(PagedPool, v194, 0x20534C53u);
                                                  if ( v199 )
                                                  {
                                                    v392[1] = v199;
                                                    LODWORD(v392[0]) = 0;
                                                    v454 = 0;
                                                    *(_OWORD *)v492 = 0LL;
                                                    v480 = 0;
                                                    Acl = RtlULongLongAdd((ULONGLONG)v199, 4uLL, &v492[1]);
                                                    if ( Acl >= 0 )
                                                    {
                                                      if ( v200 + 2 <= (_DWORD *)((char *)v200 + HIDWORD(v392[0])) )
                                                      {
                                                        v202 = (_DWORD *)v492[1];
                                                        *v200 = v201;
                                                        *v202 = v454;
                                                        ++LODWORD(v392[0]);
                                                      }
                                                      else
                                                      {
LABEL_418:
                                                        Acl = -1073741789;
                                                      }
                                                    }
                                                  }
                                                  else
                                                  {
LABEL_415:
                                                    Acl = -1073741801;
                                                  }
                                                }
                                                else
                                                {
LABEL_413:
                                                  Acl = -1073741762;
                                                }
                                              }
                                            }
                                          }
                                          goto LABEL_527;
                                        }
                                        DestinationString.Length = 0;
                                        v203 = 0;
                                        DestinationString.Buffer = 0LL;
                                        KeAcquireGuardedMutex(&g_TestHookLock);
                                        if ( qword_140D2D0C0 )
                                        {
                                          ExFreePoolWithTag(qword_140D2D0C0, 0x20534C53u);
                                          qword_140D2D0C0 = 0LL;
                                        }
                                        KeReleaseGuardedMutex(&g_TestHookLock);
                                        dword_140D2D130 = 0;
                                        dword_140D2D0BC = 0;
                                        v408 = 0;
                                        uAddend = 0;
                                        v204 = RtlUIntAdd(4u, 4u, &uAddend);
                                        v206 = v205;
                                        Acl = v204;
                                        if ( v204 >= 0 )
                                          v206 = uAddend;
                                        v481 = v206;
                                        if ( v204 >= 0 )
                                        {
                                          Acl = RtlUIntAdd(0, v206, &v408);
                                          if ( Acl >= 0 )
                                            v203 = v408;
                                        }
                                        if ( Acl >= 0 )
                                        {
                                          v418 = 8;
                                          Acl = RtlUIntAdd(8u, v203, &v418);
                                          if ( Acl < 0 )
                                          {
LABEL_441:
                                            if ( Acl >= 0 )
                                            {
                                              HIDWORD(v392[0]) = v203;
                                              if ( v203 )
                                              {
                                                v215 = ExAllocatePoolWithTag(PagedPool, v203, 0x20534C53u);
                                                if ( v215 )
                                                {
                                                  v392[1] = v215;
                                                  LODWORD(v392[0]) = 0;
                                                  v456 = 0;
                                                  *(_OWORD *)v493 = 0LL;
                                                  v482 = 0;
                                                  Acl = RtlULongLongAdd((ULONGLONG)v215, 4uLL, &v493[1]);
                                                  if ( Acl >= 0 )
                                                  {
                                                    if ( v216 + 2 <= (_DWORD *)((char *)v216 + HIDWORD(v392[0])) )
                                                    {
                                                      v218 = (_DWORD *)v493[1];
                                                      *v216 = v217;
                                                      *v218 = v456;
                                                      ++LODWORD(v392[0]);
                                                    }
                                                    else
                                                    {
                                                      Acl = -1073741789;
                                                    }
                                                  }
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
                                            goto LABEL_450;
                                          }
                                          v419 = v209;
                                          v211 = (v418 + 7) & 0xFFFFFFF8;
                                          if ( v211 >= v418 )
                                          {
                                            v419 = (v418 + 7) & 0xFFFFFFF8;
                                            Acl = RtlUIntAdd(v211, v207, &v419);
                                            if ( Acl >= 0 )
                                              v208 = v419;
                                          }
                                          else
                                          {
                                            Acl = -1073741675;
                                          }
                                          if ( Acl >= 0 )
                                          {
                                            v399 = v210;
                                            Acl = RtlUIntAdd(v210, v208, &v399);
                                            if ( Acl >= 0 )
                                            {
                                              Acl = RtlUIntAdd(v399, v212, &v399);
                                              if ( Acl >= 0 )
                                              {
                                                Acl = RtlUIntAdd(v399, *((_DWORD *)v9 + 4), &v399);
                                                if ( Acl >= 0 )
                                                {
                                                  Acl = RtlUIntAdd(v399, v213, &v399);
                                                  if ( Acl >= 0 )
                                                  {
                                                    Acl = RtlUIntAdd(v399, *((_DWORD *)v9 + 8), &v399);
                                                    v214 = v455;
                                                    if ( Acl >= 0 )
                                                      v214 = v399;
                                                    v455 = v214;
                                                  }
                                                }
                                              }
                                            }
                                            goto LABEL_441;
                                          }
                                        }
LABEL_450:
                                        v6 = v11;
                                        if ( Acl < 0 )
                                          goto LABEL_171;
                                        goto LABEL_680;
                                      }
                                      v445 = 0LL;
                                      v219 = 0;
                                      v430 = 0;
                                      LODWORD(v220) = 0;
                                      v425[0] = 0;
                                      v436 = 0;
                                      v466 = 0LL;
                                      v437 = 0;
                                      v465 = 0LL;
                                      v438 = 0;
                                      pcbLength = 0LL;
                                      if ( v395[1] && LODWORD(v395[0]) > 3 )
                                      {
                                        v221 = (UINT *)v395[1];
                                        P = v395[1];
                                        v408 = 0;
                                        while ( 1 )
                                        {
                                          NumberOfBytes = *v221;
                                          Acl = RtlULongLongAdd((ULONGLONG)v221, 4uLL, (ULONGLONG *)&P);
                                          if ( Acl < 0 )
                                            break;
                                          Acl = RtlULongLongAdd(
                                                  (ULONGLONG)P,
                                                  (unsigned int)NumberOfBytes,
                                                  (ULONGLONG *)&P);
                                          if ( Acl < 0 )
                                            break;
                                          v221 = (UINT *)P;
                                          if ( ++v408 >= 3 )
                                          {
                                            NumberOfBytes = *(_DWORD *)P;
                                            Acl = RtlULongLongAdd((ULONGLONG)P, 4uLL, (ULONGLONG *)&P);
                                            if ( Acl >= 0 )
                                            {
                                              v223 = NumberOfBytes;
                                              v222 = (const wchar_t *)P;
                                              v438 = NumberOfBytes;
                                              if ( !NumberOfBytes )
                                                v222 = 0LL;
                                              v465 = (wchar_t *)v222;
                                            }
                                            break;
                                          }
                                        }
                                        if ( Acl < 0 )
                                          goto LABEL_525;
                                        if ( !v223
                                          || (v223 & 1) != 0
                                          || v222[((unsigned __int64)v223 >> 1) - 1]
                                          || StringCbLengthW(v222, v223, &pcbLength) < 0
                                          || pcbLength + 2 != v438 )
                                        {
                                          goto LABEL_465;
                                        }
                                        v220 = pcbLength >> 1;
                                        v466 = v465;
                                        v437 = pcbLength >> 1;
                                      }
                                      else
                                      {
                                        Acl = -1073741811;
                                      }
                                      if ( Acl < 0 )
                                        goto LABEL_525;
                                      if ( 2 * (_DWORD)v220 != -2 )
                                      {
                                        pcbLength = (unsigned int)(2 * v220 + 2);
                                        v224 = ExAllocatePoolWithTag(PagedPool, pcbLength, 0x20534C53u);
                                        v225 = v224;
                                        if ( !v224 )
                                        {
                                          Acl = -1073741801;
                                          goto LABEL_525;
                                        }
                                        memmove(v224, v466, pcbLength);
                                        v430 = v437;
                                        v445 = v225;
                                        v485 = 0LL;
                                        v457 = 0;
                                        if ( v395[1] && LODWORD(v395[0]) > 4 )
                                        {
                                          v226 = (UINT *)v395[1];
                                          ullAugend = (ULONGLONG)v395[1];
                                          while ( 1 )
                                          {
                                            NumberOfBytes = *v226;
                                            Acl = RtlULongLongAdd((ULONGLONG)v226, 4uLL, &ullAugend);
                                            if ( Acl < 0 )
                                              break;
                                            Acl = RtlULongLongAdd(ullAugend, (unsigned int)NumberOfBytes, &ullAugend);
                                            if ( Acl < 0 )
                                              break;
                                            v226 = (UINT *)ullAugend;
                                            if ( (unsigned int)(v227 + 1) >= 4 )
                                            {
                                              Acl = RtlULongLongAdd(ullAugend, 4uLL, &ullAugend);
                                              if ( Acl < 0 )
                                                break;
                                              v229 = (int *)ullAugend;
                                              v457 = v228;
                                              if ( !v228 )
                                                v229 = 0LL;
                                              v485 = v229;
                                              if ( v228 == 4 )
                                              {
                                                v436 = *v229;
                                                break;
                                              }
                                              goto LABEL_488;
                                            }
                                          }
                                        }
                                        else
                                        {
                                          Acl = -1073741811;
                                        }
                                        if ( Acl < 0 )
                                          goto LABEL_525;
                                        v431 = 0;
                                        v433 = 0;
                                        v230 = RtlUIntAdd(4u, 4u, &v433);
                                        v232 = v231;
                                        Acl = v230;
                                        if ( v230 >= 0 )
                                          v232 = v433;
                                        v490 = v232;
                                        if ( v230 >= 0 )
                                        {
                                          Acl = RtlUIntAdd(0, v232, &v431);
                                          if ( Acl >= 0 )
                                            v219 = v431;
                                        }
                                        if ( Acl < 0 )
                                          goto LABEL_525;
                                        KeAcquireGuardedMutex(&g_TestHookLock);
                                        if ( qword_140D2D0C0 )
                                        {
                                          ExFreePoolWithTag(qword_140D2D0C0, 0x20534C53u);
                                          qword_140D2D0C0 = 0LL;
                                        }
                                        v233 = 2LL * v430;
                                        DestinationString.Length = 0;
                                        DestinationString.Buffer = 0LL;
                                        pcbLength = v233;
                                        if ( v233 > 0xFFFFFFFF )
                                        {
                                          Acl = -1073741675;
                                        }
                                        else
                                        {
                                          Acl = RtlUIntAdd(v233, 2u, v425);
                                          if ( Acl < 0 )
                                            goto LABEL_525;
                                          if ( !v425[0] )
                                            goto LABEL_502;
                                          v234 = v425[0];
                                          v235 = ExAllocatePoolWithTag(PagedPool, v425[0], 0x20534C53u);
                                          if ( !v235 )
                                          {
LABEL_504:
                                            Acl = -1073741801;
                                            goto LABEL_525;
                                          }
                                          qword_140D2D0C0 = v235;
                                          memset(v235, 0, v234);
                                          memmove(qword_140D2D0C0, v445, (unsigned int)pcbLength);
                                          RtlInitUnicodeString(&DestinationString, (PCWSTR)qword_140D2D0C0);
                                          dword_140D2D130 = v436;
                                          v420 = 8;
                                          Acl = RtlUIntAdd(8u, v219, &v420);
                                          if ( Acl >= 0 )
                                          {
                                            v421 = v238;
                                            v239 = (v420 + 7) & 0xFFFFFFF8;
                                            if ( v239 >= v420 )
                                            {
                                              v421 = (v420 + 7) & 0xFFFFFFF8;
                                              Acl = RtlUIntAdd(v239, v236, &v421);
                                              if ( Acl >= 0 )
                                                v237 = v421;
                                            }
                                            else
                                            {
                                              Acl = -1073741675;
                                            }
                                            if ( Acl < 0 )
                                              goto LABEL_525;
                                            v394 = 4;
                                            Acl = RtlUIntAdd(4u, v237, &v394);
                                            if ( Acl >= 0 )
                                            {
                                              Acl = RtlUIntAdd(v394, v240, &v394);
                                              if ( Acl >= 0 )
                                              {
                                                Acl = RtlUIntAdd(v394, *((_DWORD *)v9 + 4), &v394);
                                                if ( Acl >= 0 )
                                                {
                                                  Acl = RtlUIntAdd(v394, v241, &v394);
                                                  if ( Acl >= 0 )
                                                  {
                                                    Acl = RtlUIntAdd(v394, *((_DWORD *)v9 + 8), &v394);
                                                    v242 = v460;
                                                    if ( Acl >= 0 )
                                                      v242 = v394;
                                                    v460 = v242;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          if ( Acl >= 0 )
                                          {
                                            HIDWORD(v392[0]) = v219;
                                            if ( !v219 )
                                            {
LABEL_502:
                                              Acl = -1073741762;
                                              goto LABEL_525;
                                            }
                                            v243 = ExAllocatePoolWithTag(PagedPool, v219, 0x20534C53u);
                                            if ( v243 )
                                            {
                                              v392[1] = v243;
                                              LODWORD(v392[0]) = 0;
                                              v463 = 0;
                                              *(_OWORD *)v494 = 0LL;
                                              v491 = 0;
                                              Acl = RtlULongLongAdd((ULONGLONG)v243, 4uLL, &v494[1]);
                                              if ( Acl >= 0 )
                                              {
                                                if ( v244 + 2 > (_DWORD *)((char *)v244 + HIDWORD(v392[0])) )
                                                {
LABEL_488:
                                                  Acl = -1073741789;
                                                }
                                                else
                                                {
                                                  v246 = (_DWORD *)v494[1];
                                                  *v244 = v245;
                                                  *v246 = v463;
                                                  ++LODWORD(v392[0]);
                                                }
                                              }
                                              goto LABEL_525;
                                            }
                                            goto LABEL_504;
                                          }
                                        }
LABEL_525:
                                        KeReleaseGuardedMutex(&g_TestHookLock);
                                        if ( v445 )
                                        {
                                          ExFreePoolWithTag(v445, 0x20534C53u);
                                          v445 = 0LL;
                                        }
                                        goto LABEL_527;
                                      }
LABEL_465:
                                      Acl = -1073741762;
                                      goto LABEL_525;
                                    }
LABEL_153:
                                    if ( v125 != (char *)v121 )
                                    {
                                      Acl = -1073741811;
                                      goto LABEL_201;
                                    }
                                  }
                                  if ( (_DWORD)v119 )
                                  {
                                    v123 = ExAllocatePoolWithTag(PagedPool, v119, 0x20534C53u);
                                    *(_QWORD *)&Size[1] = v123;
                                    if ( !v123 )
                                    {
                                      Acl = -1073741801;
LABEL_166:
                                      v118 = NumberOfBytes_4;
                                      goto LABEL_167;
                                    }
                                    v122 = v119;
                                  }
                                  if ( v7 != (UINT *)-8LL )
                                  {
                                    memmove(v123, v120, v122);
                                    v123 = *(PVOID *)&Size[1];
                                  }
                                  v395[1] = v123;
                                  v395[0] = (PVOID)__PAIR64__(v119, Size[0]);
                                  Acl = 0;
                                  goto LABEL_166;
                                }
                              }
                            }
                          }
                          v6 = v11;
                        }
                      }
                    }
                    Acl = -1073741811;
                    v7 = 0LL;
                    v8 = 0LL;
                    v10 = 0LL;
                    goto LABEL_173;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  Acl = -1073741675;
  v7 = 0LL;
  v8 = 0LL;
LABEL_173:
  v395[0] = 0LL;
  if ( v395[1] )
  {
    ExFreePoolWithTag(v395[1], 0x20534C53u);
    v395[1] = 0LL;
  }
  v392[0] = 0LL;
  if ( v392[1] )
  {
    ExFreePoolWithTag(v392[1], 0x20534C53u);
    v392[1] = 0LL;
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0x20534C53u);
  if ( v6 )
  {
    v128 = (void *)v6[1];
    if ( v128 )
    {
      ExFreePoolWithTag(v128, 0x20534C53u);
      v6[1] = 0LL;
    }
    v129 = (void *)v6[3];
    if ( v129 )
    {
      ExFreePoolWithTag(v129, 0x20534C53u);
      v6[3] = 0LL;
    }
    v130 = (void *)v6[5];
    if ( v130 )
    {
      ExFreePoolWithTag(v130, 0x20534C53u);
      v6[5] = 0LL;
    }
    ExFreePoolWithTag(v6, 0x20534C53u);
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0x20534C53u);
  if ( v9 )
  {
    v131 = (void *)v9[1];
    if ( v131 )
    {
      ExFreePoolWithTag(v131, 0x20534C53u);
      v9[1] = 0LL;
    }
    v132 = (void *)v9[3];
    if ( v132 )
    {
      ExFreePoolWithTag(v132, 0x20534C53u);
      v9[3] = 0LL;
    }
    v133 = (void *)v9[5];
    if ( v133 )
    {
      ExFreePoolWithTag(v133, 0x20534C53u);
      v9[5] = 0LL;
    }
    ExFreePoolWithTag(v9, 0x20534C53u);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0x20534C53u);
  return (unsigned int)Acl;
}
